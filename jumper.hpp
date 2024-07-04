# ifndef jumper_hpp
#define jumper_hpp

#include<iostream>
using namespace std;

class Jumper {
    int startPoint;
    int endPoint;
    public:
    Jumper(int startPoint, int endPoint);
    int getStartPoint();
    int getEndPoint();
};

#endif