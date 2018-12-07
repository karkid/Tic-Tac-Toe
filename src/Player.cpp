//
//  Player.cpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#include "Player.hpp"

Player::Player(std::string name, std::string mark): m_strName(name), m_strMark(mark) {
    
}
Player::~Player() { 
}

std::string Player::name() const {
    return m_strName;
}

std::string Player::mark() const {
    return m_strMark;
}
