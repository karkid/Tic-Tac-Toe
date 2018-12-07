//
//  main.cpp
//  Tic-Tac-Toe
//
//  Created by Dheeraj Karki on 29/10/18.
//  Copyright © 2018 Dheeraj Karki. All rights reserved.
//

#include <iostream>
#include "TicTacToeGame.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    TicTacToeGame game;
    game.registerPlayer();
    game.play();
    return 0;
}
