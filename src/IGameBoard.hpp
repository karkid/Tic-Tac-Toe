//
//  IGameBoard.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef IGameBoard_hpp
#define IGameBoard_hpp
#include "ITile.hpp"
#include <iostream>
#include <vector>

class IGameBoard {
public:
    IGameBoard(int maxTiles);
    virtual ~IGameBoard();
protected:
    virtual void initTiles();
    virtual void uinitTiles();
    virtual bool addTile(int position, ITile* pTile, bool bReplaceExiting = false);
    virtual bool removeTile(int position);
    virtual ITile* getTile(int position) const;
    virtual bool hasEmptyTile() const;
    std::vector<ITile*> m_vTiles;
    int m_iMaxTiles;
};
#endif /* IGameBoard_hpp */
