//
//  TicTacToeGame.cpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#include "TicTacToeGame.hpp"
#include "StringHelper.hpp"

TicTacToeGame::TicTacToeGame(): IGame(), m_iMaxPlayerAllowed(2), m_iMaxRow(3), m_iMaxColumn(3) {
    int iMaxMarker = m_iMaxRow * m_iMaxColumn;
    m_pBoard = new TicTacToeBoard(iMaxMarker);
}

TicTacToeGame::~TicTacToeGame() {
    for( auto player : m_vRegistery )
    {
        if (player) {
            delete player;
        }
    }
    if (m_pBoard) {
        delete m_pBoard;
    }
}

bool TicTacToeGame::play() {
    int iActivePlayer = 0;
    std::string prompt;
    std::string pos;
    Player* pPlayer = nullptr;
    while (m_pBoard->hasTileToFill()) {
        draw();
        
        iActivePlayer = iActivePlayer % m_vRegistery.size();
        pPlayer = m_vRegistery[iActivePlayer];
        if(!pPlayer)
        {
            std::cout<<"Unknown Error Caught";
            break;
        }
        
        prompt = pPlayer->name() + " turn\n" + "Choose appropriate position: ";
        int pos = StringHelper::getInt(prompt);
        if( m_pBoard->markAt(pos, pPlayer->mark()) ) // check for valid move
        {
            pPlayer = isAnyOneWin();
            if(pPlayer)
            {
                break;
            }
            iActivePlayer++; //next player
        }
        else
            std::cout<<"Invalid move"<<std::endl;
        pPlayer = nullptr;
    }
    draw();
    if(pPlayer)
        std::cout<<"We have winner : "<< pPlayer->name()<<std::endl;
    else
        std::cout<<"Match Draw"<<std::endl;
    return true;
}

bool TicTacToeGame::registerPlayer() {
    std::string name;
    std::string markerDef;
    std::string prompt;
    while ( m_vRegistery.size() < m_iMaxPlayerAllowed ) {
        prompt = "Enter Player Name: ";
        name = StringHelper::getString(prompt);
        
        prompt = name+", enter your Marker Sign: ";
        markerDef = StringHelper::getString(prompt);

        m_vRegistery.push_back( new Player(name, markerDef) );
    }
    return m_vRegistery.size() == m_iMaxPlayerAllowed;
}

void TicTacToeGame::draw() {
    for(int row = 0; row < m_iMaxRow; row++)
    {
        for(int col = 0; col < m_iMaxColumn; col++)
        {
            int pos = m_iMaxColumn * row + col;
            std::string markerDef = m_pBoard->getMarkFrom(pos);
            if(markerDef.empty())
                markerDef = std::to_string(pos);
            std::cout<<markerDef<<"|";
        }
        std::cout<<std::endl;
    }
}

Player* TicTacToeGame::isAnyOneWin() {
    //ToDo: This Algo should be refactor.
    int lines[8][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };
    for (int i = 0; i < 8; i++) {
        std::string s1 = m_pBoard->getMarkFrom(lines[i][0]);
        std::string s2 = m_pBoard->getMarkFrom(lines[i][1]);
        std::string s3 = m_pBoard->getMarkFrom(lines[i][2]);
        if( !s1.empty() && s1.compare(s2) == 0 && s2.compare(s3) == 0 )
          return findPlayerWithMarker(s1);
    }
    return nullptr;
}

Player *TicTacToeGame::findPlayerWithMarker(const std::string &markerDef) {
    for(auto player : m_vRegistery )
    {
        if(markerDef.compare(player->mark()) == 0)
        {
           return player;
        }
    }
    return nullptr;
}









