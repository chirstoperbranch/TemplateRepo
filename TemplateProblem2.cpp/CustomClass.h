#ifndef CUSTOMCLASS_H
#define CUSTOMCLASS_H

#pragma once
using namespace std;
class CustomClass
{
public:
    inline CustomClass(){}
    inline ~CustomClass(){}
    inline CustomClass(int val = 0): value(val){

    }
    inline int getValue()const{
        return value;
    }
    inline void setValue(int val){
        value = val;
    }
private:
int value;
};

#endif