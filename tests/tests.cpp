#include <catch2/catch_test_macros.hpp>

#include "naive_bayes.h"

TEST_CASE("Probability of Naive Bayes classificator is computed", "[bayes]") {
    
    dataset_t dataset {{"spam", {"nomsg"}}, {"ham", {"nomsgtoo"}}};
    std::string msg {"msg"};
    
    REQUIRE(getBayesProb(msg, dataset, "spam") == 0.5);
    REQUIRE(getBayesProb(msg, dataset, "ham") == 0.5);
}

TEST_CASE("String transformations", "[string]") {
    
    splitstring_t result {"Hello","world!","Do","your","best!"};
    
    SECTION("Test string splitted by spaces") {
        std::string str {"Hello world! Do your best!"};
        std::string delim {" "};
        REQUIRE(splitString(str, delim) == result);
    }
    SECTION("Test string splitted by commas") {
        std::string str {"Hello,world!,Do,your,best!"};
        std::string delim {","};
        REQUIRE(splitString(str, delim) == result);
    }
    
}
