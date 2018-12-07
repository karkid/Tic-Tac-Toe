//
//  TicTacToeTile.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef TicTacToeTile_hpp
#define TicTacToeTile_hpp

#include <stdio.h>
#include <iostream>
#include <string.h>
#include "ITile.hpp"

class TicTacToeTile : public ITile{
public:
    TicTacToeTile(std::string markerDef);
    virtual ~TicTacToeTile();
    std::string mark() const override;
};
#endif /* TicTacToeTile_hpp */
