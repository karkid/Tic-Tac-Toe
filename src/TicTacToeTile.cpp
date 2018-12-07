//
//  TicTacToeTile.cpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#include "TicTacToeTile.hpp"

TicTacToeTile::TicTacToeTile(std::string markerDef): ITile(markerDef)
{
}

TicTacToeTile::~TicTacToeTile()
{
}

std::string TicTacToeTile::mark() const
{
    return m_strMark;
}
