#include <bits/stdc++.h>
#include "dice.hpp"
#include "jumper.hpp"
#include "player.hpp"
#include "gameBoard.hpp"

using namespace std;

int main()
{
    Dice dice(1);
    Player p1("Player-1", 1);
    Player p2("Player-2", 2);
    queue<Player> allPlayers;
    allPlayers.push(p1);
    allPlayers.push(p2);
    Jumper snake1(10, 2);
    Jumper snake2(99, 12);
    vector<Jumper> snakes;
    snakes.push_back(snake1);
    snakes.push_back(snake2);

    Jumper ladder1(5, 25);
    Jumper ladder2(40, 89);
    vector<Jumper> ladders;
    ladders.push_back(ladder1);
    ladders.push_back(ladder2);

    map<string, int> playerCurrentPositions;
    playerCurrentPositions["Randhir"] = 1;
    playerCurrentPositions["Saurabh"] = 1;
    GameBoard gameBoard(dice, allPlayers, snakes, ladders, playerCurrentPositions, 100);
    srand(time(0));
    gameBoard.startGame();
}