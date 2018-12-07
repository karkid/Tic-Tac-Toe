//
//  TicTacToeGame.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef TicTacToeGame_hpp
#define TicTacToeGame_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "IGame.hpp"
#include "Player.hpp"
#include "TicTacToeBoard.hpp"

class TicTacToeGame : public IGame
{
public:
    TicTacToeGame();
    virtual ~TicTacToeGame();
    bool play() override;
    bool registerPlayer() override;
    void draw() override;
private:
    Player* isAnyOneWin();
    Player* findPlayerWithMarker(const std::string& markerDef);
    std::vector<Player*> m_vRegistery;
    TicTacToeBoard* m_pBoard;
    const int m_iMaxPlayerAllowed;
    const int m_iMaxRow;
    const int m_iMaxColumn;
};
#endif /* TicTacToeGame_hpp */
