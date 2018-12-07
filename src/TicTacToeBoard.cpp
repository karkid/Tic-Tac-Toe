//
//  TicTacToeBoard.cpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#include "TicTacToeBoard.hpp"
#include "TicTacToeTile.hpp"

TicTacToeBoard::TicTacToeBoard(int maxTiles): IGameBoard(maxTiles)
{
}

TicTacToeBoard::~TicTacToeBoard()
{
}

bool TicTacToeBoard::markAt(int position, std::string markerDef) {
    return addTile(position, new TicTacToeTile(markerDef));
}

std::string TicTacToeBoard::getMarkFrom(int position) const {
    std::string mark;
    TicTacToeTile* pTile = dynamic_cast<TicTacToeTile*>(getTile(position));
    if (pTile) {
        mark = pTile->mark();
    }
    return mark;
}

bool TicTacToeBoard::hasTileToFill() const {
    return hasEmptyTile();
}
