//
//  main_5.cpp
//  CH4
//
//  Created by Fred Naude on 2016/02/17.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double total_cost(int number_par, double price_par);

int main_5(){
    double price, bill;
    int number;
    
    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price of per item R";
    cin >> price;
    
    bill = total_cost(number, price);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at "
         << "R" << price << " each\n"
         << "Final bill, including tax, is R" << bill
         << endl;
    
    return 0;
}

double total_cost(int number_par, double price_par){
    const double TAX_RATE = 0.05;
    double subtotal;
    
    subtotal = price_par * number_par;
    return (subtotal + subtotal*TAX_RATE);
}