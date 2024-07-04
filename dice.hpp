#ifndef dice_hpp
#define dice_hpp

#include<iostream>
using namespace std;

class Dice{
    int numberOfDice;
    public:
    Dice(int numberOfDice = 1);
    int rollDice();
};

#endif