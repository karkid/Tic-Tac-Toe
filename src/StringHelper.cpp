//
//  StringHelper.cpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#include "StringHelper.hpp"

std::string& StringHelper::ltrim(std::string& str, const std::string& chars)
{
    str.erase(0, str.find_first_not_of(chars));
    return str;
}

std::string& StringHelper::rtrim(std::string& str, const std::string& chars)
{
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}

std::string& StringHelper::trim(std::string& str, const std::string& chars)
{
    return ltrim(rtrim(str, chars), chars);
}

std::string StringHelper::getString(const std::string& prompt, bool bTrim)
{
    std::string input;
    while (input.empty()) {
        std::cout<<prompt;
        std::getline(std::cin,input);
        if (bTrim) {
            input = StringHelper::trim(input);
        }
    }
    return input;
}
int StringHelper::getInt(const std::string& prompt, bool isNegativeAllowed)
{
    bool bValid = false;
    std::string sInput;
    int iInput = -1;
    while (!bValid) {
        std::cout<<prompt;
        std::getline(std::cin,sInput);
        sInput = StringHelper::trim(sInput);
        try {
            iInput = std::stoi(sInput);
            if(!isNegativeAllowed && iInput < 0)
                continue;
            break;
        } catch (...) {
            continue;
        }
    }
    return iInput;
}
