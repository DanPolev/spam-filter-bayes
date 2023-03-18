
#include "naive_bayes.h"


double getBayesProb(const std::string& test_msg,
                    const dataset_t& dataset,
                    const std::string& test_key) {
    /// Get probability of belonging test message to given class of messages
    /// according to key. Powered by Naive Bayes.
    const splitstring_t test_words = splitString(test_msg);
    const int n_unique_words = getUniqueWordsNum(dataset);
    const int total_messages = getTotalMessages(dataset);
    std::map<std::string, double> class_vals;
    
    for (const auto& [key, ignored] : dataset) {
        const splitstring_t key_messages = dataset.at(key);
        const int n_key_messages = key_messages.size();
        const splitstring_t key_words = getWords(dataset, key);
        const int n_key_words = key_words.size();
        double class_val = log(n_key_messages/static_cast<double>(total_messages));
        
        for (const auto& word : test_words) {
            const int word_occurrence = std::count(key_words.begin(),
                                                   key_words.end(), word);
            class_val += log((word_occurrence + 1.) /
                static_cast<double>(n_unique_words + n_key_words));
        }
        class_vals[key] = class_val;
    }
    
    double sum(0);
    for (const auto& [key, val] : class_vals) {
        if (key == test_key) continue;
         sum += exp(val - class_vals[test_key]);
    }
    
    return 1 / (1 + sum);
}

int getUniqueWordsNum(const dataset_t& dataset) {
    /// Get number of unique word in dataset
    
    std::set<std::string> unique_words;
    splitstring_t words;
    
    for (const auto& [key, ignored] : dataset) {
        words = getWords(dataset, key);
        unique_words.insert(words.begin(), words.end());
    }
    return unique_words.size();
}

int getTotalMessages(const dataset_t& dataset) {
    /// Count total messages in the dataset
    int msg_counter(0);
    for (const auto& [ignored, messages] : dataset) {
        msg_counter += messages.size();
    }
    return msg_counter;
}

splitstring_t getWords(const dataset_t& dataset, const std::string& key) {
    /// Split message of dataset[key] into words
    splitstring_t words;
    for (const auto& msg : dataset.at(key)) {
        splitstring_t splitted_msg = splitString(msg);
        words.insert(words.end(), splitted_msg.begin(),
                              splitted_msg.end());
    }
    return words;
}
