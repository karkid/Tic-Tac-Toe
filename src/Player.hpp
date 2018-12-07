//
//  Player.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Player
{
public:
    Player(std::string name, std::string mark);
    virtual ~Player();
    std::string name() const;
    std::string mark() const;
private:
    const std::string m_strName;
    const std::string m_strMark;
};
#endif /* Player_hpp */
