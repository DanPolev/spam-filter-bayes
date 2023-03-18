#ifndef NAIVE_BAYES_H
#define NAIVE_BAYES_H

#include <istream>
#include <vector>
#include <cctype>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>

#include "str_transform.h"


using dataset_t = std::map<std::string, std::vector<std::string>>;

double getBayesProb(const std::string& test_msg,
                    const dataset_t& dataset,
                    const std::string& test_key);

int getUniqueWordsNum(const dataset_t& dataset);

int getTotalMessages(const dataset_t& dataset);

splitstring_t getWords(const dataset_t& dataset, const std::string& key);

#endif
