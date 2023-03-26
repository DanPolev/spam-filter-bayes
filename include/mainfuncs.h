#ifndef MAINFUNCS_H
#define MAINFUNCS_H

#include <iostream>
#include <fstream>

#include "str_transform.h"
#include "naive_bayes.h"

void prepDataset(dataset_t& dataset);

bool isSpam(std::string msg, const dataset_t& dataset);

splitstring_t makeProcessedDataset(const std::string& filename);

void createProcessedDatasetFile(const std::string& filename,
                                const splitstring_t& csv_lines);

void checkProcessedDatasetFileExist(const std::string& rawcsv_filename,
                                    const std::string& filename);
#endif
