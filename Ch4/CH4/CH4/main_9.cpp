//
//  main_9.cpp
//  CH4
//
//  Created by Fred Naude on 2016/03/06.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// shows the overloading of functions
// two function definitions are used. one with two params and one with three

#include <iostream>
using namespace std;

//returns the average of two numbers
double ave(double num1, double num2);
//returns the average of three numbers
double ave(double num1, double num2, double num3);

int main_9(){
    
    cout    << "The average of 2.0, 2.5 and 3.0 is "
            << ave(2.0, 2.5, 3.0) << endl;
    
    cout    << "The average of 4.5 and 5.5 is "
            << ave(4.5, 5.5) << endl;
    
    return 0;
}

double ave(double num1, double num2){
    double average = (num1 + num2) / 2.0;
    return average;
}

double ave(double num1, double num2, double num3){
    double average = (num1 + num2 + num3) / 3.0;
    return average;
}
