#include "mainfuncs.h"

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

splitstring_t makeProcessedDataset(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::string errmsg = "Cannot open" + filename + " file.";
        throw std::runtime_error(errmsg);
    }
    
    const char str_delim = ' '; 
    std::string oneline_data = makeStringFromFile(file, str_delim);
    replaceAll(oneline_data, "\"\"", "'");
    
    return splitString(oneline_data, " ", "\"");
}

void createProcessedDatasetFile(const std::string& filename,
                                const splitstring_t& csv_lines) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::string errmsg = "Cannot open" + filename + " file.";
        throw std::runtime_error(errmsg);
    }
            
    for (int i = 0; i < (int)csv_lines.size(); i++) {
        file << csv_lines[i];
        if (i < (int)csv_lines.size() - 1) 
            file << "\n";
    }
}

void checkProcessedDatasetFileExist(const std::string& rawcsv_filename,
                                    const std::string& filename) {
    std::fstream file(filename, std::ios::in);
    if (!file.is_open() || !file.good()) {
        
        splitstring_t csv_lines = makeProcessedDataset(rawcsv_filename);

        createProcessedDatasetFile(filename, csv_lines);
    }
}
