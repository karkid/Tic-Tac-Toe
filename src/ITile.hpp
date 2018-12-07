//
//  ITile.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef ITile_hpp
#define ITile_hpp
#include <iostream>
#include <string>
class ITile
{
public:
    ITile(std::string markerDef): m_strMark(markerDef){}
    virtual ~ITile(){}
    virtual std::string mark() const = 0;
protected:
    std::string m_strMark;
};
#endif /* ITile_hpp */
