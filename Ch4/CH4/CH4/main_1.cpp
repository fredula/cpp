//
//  main_1.cpp
//  CH4
//
//  Created by Fred Naude on 2016/02/17.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
//  a simple program used to calculate the price of a dog house

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    const double COST_PER_SQ_M = 10.50;
    double budget, area, length_side;
    
    cout << "Please enter the amount budgeted for your dog house R";
    cin >> budget;
    
    area = budget/COST_PER_SQ_M;
    length_side = sqrt(area);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "For a price of R" << budget << endl
         << "I can build you a great square dog house\n"
         << "that is " << length_side
         << "m on each side. \n";
    
    return 0;
}

