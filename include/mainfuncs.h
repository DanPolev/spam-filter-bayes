#ifndef MAINFUNCS_H
#define MAINFUNCS_H

#include <iostream>
#include <fstream>

#include "str_transform.h"
#include "naive_bayes.h"

void prepDataset(dataset_t& dataset);

bool isSpam(std::string msg, const dataset_t& dataset);

#endif
