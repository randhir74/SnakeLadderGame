#include "dice.hpp"
#include "jumper.hpp"
#include "player.hpp"
#include "gameBoard.hpp"
#include <iostream>

using namespace std;

GameBoard::GameBoard(Dice &dice, queue<Player> &nextValue, vector<Jumper> &snakes, vector<Jumper> &ladders, map<string, int> &playersCurrentPosition, int boardSize)
{
    this->dice = dice;
    this->nextValue = nextValue;
    this->snakes = snakes;
    this->ladders = ladders;
    this->playersCurrentPosition = playersCurrentPosition;
    this->boardSize = boardSize;
}

void GameBoard::startGame()
{
    while (nextValue.size() > 1)
    {
        Player player = nextValue.front();
        nextValue.pop();
        int currentPosition = playersCurrentPosition[player.getPlayerName()];
        playersCurrentPosition.erase(player.getPlayerName());
        int diceValue = dice.rollDice();
        int nextPosition = currentPosition + diceValue;
        if (nextPosition > boardSize)
        {
            nextPosition = currentPosition;
            nextValue.push(player);
        }
        else if (nextPosition == boardSize)
        {
            cout << player.getPlayerName() << " has won the game" << endl;
        }
        else
        {
            for (int i = 0; i < snakes.size(); i++)
            {
                if (nextPosition == snakes[i].getStartPoint())
                {
                    cout << player.getPlayerName() << " got bitten by the snake at position " << nextPosition << endl;
                    nextPosition = snakes[i].getEndPoint();
                    break;
                }
            }

            for (int i = 0; i < ladders.size(); i++)
            {
                if (nextPosition == ladders[i].getStartPoint())
                {
                    cout << player.getPlayerName() << " got ladder present at position " << nextPosition << endl;
                    nextPosition = ladders[i].getEndPoint();
                    break;
                }
            }
            if (nextPosition == boardSize)
            {
                cout << player.getPlayerName() << " has won the game" << endl;
            }
            else
            {
                playersCurrentPosition[player.getPlayerName()] = nextPosition;
                cout << player.getPlayerName() << " is present at position " << nextPosition << endl;
                nextValue.push(player);
            }
        }
    }
}
