# ifndef gameBoard_hpp
# define gameBoard_hpp

#include "dice.hpp"
#include "player.hpp"
#include "Jumper.hpp"
#include<bits/stdc++.h>
using namespace std;

class GameBoard{
    Dice dice;
    queue<Player> nextValue;
    vector<Jumper> snakes;
    vector<Jumper> ladders;
    map<string, int> playersCurrentPosition;
    int boardSize;
    public:
    GameBoard(Dice &dice, queue<Player> &nextValue, vector<Jumper> &snakes, vector<Jumper> &ladders, map<string, int> &playersCurrentPosition, int boardSize);
    void startGame();
};

#endif