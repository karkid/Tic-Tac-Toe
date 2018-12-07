//
//  IGameBoard.cpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#include "IGameBoard.hpp"

IGameBoard::IGameBoard(int maxTiles): m_iMaxTiles(maxTiles)
{
    initTiles();
}

IGameBoard::~IGameBoard()
{
    uinitTiles();
}

void IGameBoard::initTiles()
{
    for (int i = 0; i < m_iMaxTiles; i++) {
        m_vTiles.push_back(nullptr);
    }
}

void IGameBoard::uinitTiles()
{
    for( auto marker : m_vTiles)
    {
        if (marker) {
            delete marker;
        }
    }
}

ITile *IGameBoard::getTile(int position) const {
    ITile *pTile = nullptr;
    if(position >= 0 && position < m_vTiles.size())
    {
        pTile = m_vTiles[position];
    };
    return pTile;
}


bool IGameBoard::removeTile(int position) {
    bool bSuccess = false;
    if(position >= 0 && position < m_vTiles.size())
    {
        ITile *pTile = m_vTiles[position];
        if(pTile)
        {
            delete pTile;
            m_vTiles[position] = nullptr;
        }
    };
    return bSuccess;;
}


bool IGameBoard::addTile(int position, ITile *pTile, bool bReplaceExiting) {
    bool bSuccess = false;
    if(pTile)
    {
        if(position >= 0 && position < m_vTiles.size() )
        {
            if (bReplaceExiting || m_vTiles.at(position) == nullptr) {
                bSuccess = true;
                m_vTiles[position] = pTile;
            }
        }
    }
    return bSuccess;
}

bool IGameBoard::hasEmptyTile() const { 
    for( auto marker : m_vTiles)
    {
        if (!marker) {
            return true;
        }
    }
    return false;
}

