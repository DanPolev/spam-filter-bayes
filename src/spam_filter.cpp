#include <iostream>
#include <string>
#include <exception>

#include "csv.h"
#include "naive_bayes.h"
#include "mainfuncs.h"



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

        const std::string rawcsv_filename {"../data/spam_ham_dataset.csv"};
        const std::string truecsv_filename {"../data/spam_ham_lines.csv"};
        checkProcessedDatasetFileExist(rawcsv_filename, truecsv_filename);
        dataset_t dataset;

        io::CSVReader<4, io::trim_chars<' ', '\t'>, io::double_quote_escape<',', '\"'>> csv_reader(truecsv_filename);
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
