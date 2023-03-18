#ifndef STR_TRANSFORM_H
#define STR_TRANSFORM_H

#include <vector>
#include <string>
#include <string_view>
#include <algorithm>
#include <istream>

using splitstring_t = std::vector<std::string>;

void removeAllCh(std::string& str, const char ch);

void lowerString(std::string& str);

splitstring_t splitString(const std::string& str,
                          const std::string delimiter = " ",
                          const std::string& escaped_quote = std::string());
                           
std::string makeStringFromFile(std::istream& file, const char delim = ' ');

std::size_t replaceAll(std::string& inout, std::string_view what, std::string_view with);


#endif
