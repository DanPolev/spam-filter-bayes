#include <iostream>
#include <string>
#include <exception>
#include <fstream>

#include "csv.h"
#include "str_transform.h"
#include "naive_bayes.h"

void prepDataset(dataset_t& dataset) {
    
    for (auto& [ignored, messages] : dataset) {
        for (auto& msg : messages) {
            lowerString(msg);
        }
    }
}

bool isSpam(std::string msg, const dataset_t& dataset) {
    lowerString(msg);
    double spam_prob = getBayesProb(msg, dataset, "spam");
    std::cout << "Prob = " << spam_prob << "\n";
    if (spam_prob >= 0.75) return true;
    else return false;
}

void checkFileExist(const std::string& filename) {
    std::fstream file(filename, std::ios::in);
    if (!file.is_open() || !file.good()) {
        const std::string rawcsv_filename {"../data/spam_ham_dataset.csv"};
        file.open(rawcsv_filename, std::ios::in);
        
        const char str_delim = ' '; 
        std::string oneline_data = makeStringFromFile(file, str_delim);
        replaceAll(oneline_data, "\"\"", "'");
        splitstring_t csv_lines = splitString(oneline_data, " ", "\"");
        
        file.open(filename, std::ios::out);
            
        for (const auto& line : csv_lines) {
            file << line << "\n";
        }
    }
}

void help(char** argv) {
    std::string errmsg = "Usage: " + std::string(argv[0]) + " \"test_message\"";
    throw std::runtime_error(errmsg);
}


int main(int argc, char** argv) {
    
    try {
        std::string test_msg;
        if (argc < 2) help(argv);
        else {
            test_msg = std::string(argv[1]);
        }

        const std::string truecsv_filename {"../data/spam_ham_lines.csv"};
        checkFileExist(truecsv_filename);
        dataset_t dataset;

        io::CSVReader<4, io::trim_chars<' ', '\t', '\n'>, io::double_quote_escape<',', '\"'>> csv_reader(truecsv_filename);
        csv_reader.read_header(io::ignore_extra_column, "unknown_id", "label", "text", "label_num");
        int id;
        std::string spam_label; std::string spam_msg; int spam_labelid;
        while(csv_reader.read_row(id, spam_label, spam_msg, spam_labelid)){
            dataset[spam_label].push_back(spam_msg);
        }
        
        prepDataset(dataset);
        bool is_spam = isSpam(test_msg, dataset);
        std::cout << "Spam?: " << std::boolalpha << is_spam << "\n";
    }
    catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
    return 0;
}
