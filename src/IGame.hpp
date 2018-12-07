//
//  IGame.hpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 30/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#ifndef IGame_hpp
#define IGame_hpp
class IGame
{
public:
    IGame(){};
    virtual ~IGame(){};
    virtual bool play() = 0;
    virtual bool registerPlayer() = 0;
    virtual void draw() = 0;
};
#endif /* IGame_hpp */
