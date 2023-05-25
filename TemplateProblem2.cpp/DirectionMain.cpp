#include <iostream>
#include <iomanip>
#include <string>
#include "Directions.h"
#include "CustomClass.h"

using namespace std;

int main(){
    //Instantiate Directions with different data types
    Directions<int> inDirections(3,4);
    Directions<double> doubleDirections(2, 1.5);
    Directions<string> stringDirections(5, "north");
    Directions<CustomClass> customDirections(1, CustomClass(10));
    
    //Display the values using getters
    cout << "Int Directions: " << inDirections.getStepNum() << ",  " << inDirections.getDirection() << endl; 
    cout << "Double Directions: " << doubleDirections.getStepNum() << ", " << doubleDirections.getDirection() << endl;
    cout << "String Directions: " << stringDirections.getStepNum() << ", " << stringDirections.getDirection() << endl;
    cout << "Custom Directions: " << customDirections.getStepNum() << ", " << customDirections.getDirection() << endl;

    //Update values using setters
    inDirections.setStepNum(6);
    inDirections.setDirection(8);
    doubleDirections.setStepNum(4);
    doubleDirections.setDirection(2.75);
    stringDirections.setStepNum(7);
    stringDirections.setDirection("south");
    customDirections.setStepNum(2);
    customDirections.setDirection(CustomClass(20));

    //display the update values using getters
    cout << "Update int directions: " << inDirections.getStepNum() << ", " << inDirections.getDirection() << endl;
    cout << "Update double directions: " << doubleDirections.getStepNum() << ", " << doubleDirections.getDirection() << endl;
    cout << "Update string directions: " << stringDirections.getStepNum() << ", " << stringDirections.getDirection() << endl;
    cout << "Update custom directions: " << customDirections.getStepNum() << ", " << customDirections.getDirection() << endl;

    return 0;
}