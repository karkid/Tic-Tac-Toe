//
//  TicTacToeBoard.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef TicTacToeBoard_hpp
#define TicTacToeBoard_hpp

#include <stdio.h>
#include <iostream>
#include "IGameBoard.hpp"

class TicTacToeBoard : public IGameBoard
{
public:
    TicTacToeBoard(int maxTiles);
    virtual ~TicTacToeBoard();
    bool markAt(int position, std::string markerDef);
    std::string getMarkFrom(int position) const;
    bool hasTileToFill() const;
};
#endif /* TicTacToeBoard_hpp */
