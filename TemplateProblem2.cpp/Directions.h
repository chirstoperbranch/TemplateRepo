#ifndef DIRECTIONS_H
#define DIRECTIONS_H

#pragma once
using namespace std;

template <typename T>

class Directions
{
public:
    inline Directions(){}
    inline ~Directions(){}
    inline Directions(int step = 0, const T& dir = T()):stepNum(step), direction(dir){

    }
    inline int getStepNum(){
        return stepNum;
    }
    inline void setStepNum(int step){
        stepNum = step;
    }
    inline T getDirection() const{
        return direction;
    }
    inline setDirection(const T& dir){
        direction = dir;
    }


private:
int stepNum;
T direction;
};

#endif