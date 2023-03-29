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
