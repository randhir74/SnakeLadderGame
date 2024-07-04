# ifndef player_hpp
# define player_hpp
#include<iostream>
using namespace std;

class Player{
    string playerName;
    int id;
    public:
    Player(string playerName, int id);
    string getPlayerName();
};

#endif