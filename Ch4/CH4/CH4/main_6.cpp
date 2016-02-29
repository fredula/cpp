//
//  main_6.cpp
//  CH4
//
//  Created by Fred Naude on 2016/02/29.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
//  PROBLEM:
//  Input will be diameter of pizza and the price of each size
//  The output will give cost per square inch
//
//  Subtask 1 - Get the input data for both small and large pizzas
//  Subtask 2 - Compute the price per square inch for small pizza
//  Subtask 3 - Compute the price per square inch for large pizza
//  Subtask 4 - Determine which is better value
//  Subtask 5 - Output results
//

#include <iostream>
using namespace std;

//function declaration
//returns the price per square inch of pizza
//params    - @diameter : whats the size?
//          - @double   : whats the price?
double unitprice(int diameter, double price);

int main_6(){
    
    int diameter_small, diameter_large;
    double price_small, unitprice_small, price_large, unitprice_large;
    
    cout << "Welcome to the pizza consumers union\n";
    cout << "Enter the diameter of the small pizza(in inches) : ";
    cin >> diameter_small;
    cout << "Enter the price of the small pizza : $";
    cin >> price_small;
    cout << "Enter the diameter of the large pizza(in inches) : ";
    cin >> diameter_large;
    cout << "Enter the price of the large pizza : $";
    cin >> price_large;
    
    unitprice_small = unitprice(diameter_small, price_small);
    unitprice_large = unitprice(diameter_large, price_large);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout    << "Small pizza:\n"
            << "Diameter = " << diameter_small << " inches\n"
            << "Price = $" << price_small
            << " Per square inch = $" << unitprice_small << endl
            << "Large pizza:\n"
            << "Diameter = " << diameter_large << " inches\n"
            << "Price = $" << price_large
            << " Per square inch = $" << unitprice_large << endl;
    if(unitprice_large < unitprice_small){
        cout << "The large pizza is the better buy.\n";
    }else{
        cout << "The small pizza is the better buy. \n";
    }
    
    return 0;
}

double unitprice(int diameter, double price){
    
    const double PI = 3.14159;
    double radius, area;
    
    radius = diameter/static_cast<double>(2);
    area = PI * radius * radius;
    return (price/area);
}
