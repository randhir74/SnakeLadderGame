#include "jumper.hpp"
#include <iostream>
using namespace std;

Jumper::Jumper(int startPoint, int endPoint)
{
    this->startPoint = startPoint;
    this->endPoint = endPoint;
}

int Jumper::getStartPoint(){
    return this->startPoint;
}

int Jumper::getEndPoint(){
    return this->endPoint;
}