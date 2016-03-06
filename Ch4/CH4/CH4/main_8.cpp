//
//  main_8.cpp
//  CH4
//
//  Created by Fred Naude on 2016/03/06.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// the common factorial function

#include <iostream>
using namespace std;

//a function for !n to find the factorial of a number
int factorial(int n);

int main_8(){
    int x;
    x = factorial(3);
    cout << x << endl;
    
    return 0;
}

int factorial(int n){
    int product = 1;
    
    while (n > 0) {
        product = n * product;
        n--;
    }
    
    return product;
}
