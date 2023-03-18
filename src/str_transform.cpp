#include "str_transform.h"

void removeAllCh(std::string& str, const char ch) {
    /// Remove all given charachters from the string
    auto no_char = std::remove(str.begin(), str.end(), ch);
    str.erase(no_char, str.end());
}

void lowerString(std::string& str) {
    /// Lower given string.
    auto tolower { [](unsigned char ch) { return std::tolower(ch); }};
    std::transform(str.begin(), str.end(), str.begin(), tolower);
}

splitstring_t splitString(const std::string& str,
                           const std::string delimiter,
                           const std::string& escaped_quote) {
    /// Split your string in substrings according DELIMITER parameter.
    /// DELIMITERs that are inside ESCAPED_QUOTEs will be skipped. 
    splitstring_t splitted_strings;
    int pos_start(0), pos_end;
    int delim_len = delimiter.size();
    int quote_len = escaped_quote.size();
    
    while ((pos_end = str.find(delimiter, pos_start)) != std::string::npos) {
        
        int pos_startquote = str.find(escaped_quote, pos_start);
        int pos_endquote = str.find(escaped_quote, pos_startquote + quote_len);
        while (pos_end > pos_startquote && pos_end < pos_endquote) {
            int quoteinner_pos_start = pos_endquote + quote_len;
            pos_end = str.find(delimiter, quoteinner_pos_start);
        }
        
        splitted_strings.push_back(str.substr(pos_start, pos_end - pos_start));
        pos_start = pos_end + delim_len;
    }
    splitted_strings.push_back(str.substr(pos_start));
    return splitted_strings;
}

std::string makeStringFromFile(std::istream& file, const char delim) {
    /// Pack all file data in one string.
    /// Strings will be delimited by DELIM parameter.
    std::string str;
    std::string res_str;
    
    while (std::getline(file, str)) {
        if (str.empty()) continue;
        res_str += str + delim;
    }
    return res_str;
}

std::size_t replaceAll(std::string& inout, std::string_view what, std::string_view with) {
    /// Replace all occurences set in the string with given chars.
    std::size_t count {};
    for (std::string::size_type pos{};
         inout.npos != (pos = inout.find(what.data(), pos, what.size()));
         pos += what.size(), ++count) {
        inout.replace(pos, what.size(), with.data(), with.size());
    }
    return count;
}
