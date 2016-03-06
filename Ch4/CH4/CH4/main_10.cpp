//
//  main_10.cpp
//  CH4
//
//  Created by Fred Naude on 2016/03/06.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
//  Determines whether a round or rectangular pizza is the best buy

#include <iostream>
using namespace std;

//reurns the price per square inch of round pizza
//diameter is the diameter in inches.
//price is the price of the pizza
double unitprice2(int diameter, double price);
//returns the price per square inch of a rectangular pizza
//length and width are size params
//price is the price of the rectangular pizza
double unitprice2(int length, int width, double price);

int main(){
    
    int diameter, length, width;
    double  price_round, unit_price_round,
    price_rectangular, unit_price_rectangular;
    
    cout    << "Welcome to Pizza Consumers Union. \n";
    cout    << "Enter the diameter in inches"
            << " of a round pizza. ";
    cin >> diameter;
    
    cout    << "Enter the price of a round pizza: $";
    cin >> price_round;
    
    cout    << "Enter the length and width in inches \n"
            << " of a rectangular pizza.";
    cin >> length >> width;
    
    cout    << "Enter the price of a rectangular pizza: $";
    cin >> price_rectangular;
    
    unit_price_round = unitprice2(diameter, price_round);
    unit_price_rectangular = unitprice2(length, width, price_rectangular);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout    << endl
            << "Round pizza: Diameter = "
            << diameter << " inches\n"
            << "Price = $" << price_round
            << " Per square inch = $" << unit_price_round
            << endl
            << "Rectangular pizza: Length = "
            << length << " inches\n"
            << "Rectangular pizza: Width = "
            << width << " inches\n"
            << "Price = $" << price_rectangular
            << " Per square inc = $" << unit_price_rectangular
            << endl;
    
    if(unit_price_round < unit_price_rectangular){
        cout << "The round one is better value for money.\n";
    }else{
        cout << "The rectangular one is the better buy.\n";
    }
    cout << "Buon Appetito!\n";
    
    return 0;
}

double unitprice2(int diameter, double price){
    const double PI = 3.14159;
    double radius, area;
    
    radius = diameter/static_cast<double>(2);
    area = PI * radius * radius;
    return (price/area);
}

double unitprice2(int length, int width, double price){
    double area = length * width;
    return (price/area);
}

