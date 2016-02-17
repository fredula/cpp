//
//  main_4.cpp
//  CH4
//
//  Created by Fred Naude on 2016/02/17.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// simple program that calculates the square root of pi

#include <iostream>
#include <cmath>
using namespace std;

double rootOfPI(){
    
    double pi = 3.14159, root_of_pi;
    root_of_pi = sqrt(pi);
    
    return root_of_pi;
}

int main_4(){
    
    double returned_root;
    returned_root = rootOfPI();
    
    cout << returned_root << endl;
    
    return 0;
}
