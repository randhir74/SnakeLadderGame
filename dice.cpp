#include "dice.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Dice::Dice(int numberOfDice)
{
    this->numberOfDice = numberOfDice;
}

int Dice::rollDice()
{
    int rolledNumber = rand() % 6 + 1;
    // double randomNumber = (1.0 * rand())/RAND_MAX;
    // int rolledNumber = randomNumber*(5*this->numberOfDice) + 1;
    return rolledNumber;
}