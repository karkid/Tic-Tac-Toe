//
//  StringHelper.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef StringHelper_hpp
#define StringHelper_hpp

#include <stdio.h>
#include <iostream>
#include <string>
namespace StringHelper {
    std::string& ltrim(std::string& str, const std::string& chars = "\t\n\v\f\r ");
    std::string& rtrim(std::string& str, const std::string& chars = "\t\n\v\f\r ");
    std::string& trim(std::string& str, const std::string& chars = "\t\n\v\f\r ");
    std::string getString(const std::string& prompt, bool bTrim = true);
    int getInt(const std::string& prompt, bool isNegativeAllowed = false );
};
#endif /* StringHelper_hpp */
