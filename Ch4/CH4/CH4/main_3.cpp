//
//  main_3.cpp
//  CH4
//
//  Created by Fred Naude on 2016/02/17.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// Type casting example
// this example returns 4, but it should return 4.5
// we have to typw cast the one value to a double to get the correct answer

#include <iostream>
#include <cmath>
using namespace std;

int main_3(){
    
    int total_sweets, num_people;
    double sweets_pp;
    
    cout << "Number of sweets?" << endl;
    cin >> total_sweets;
    cout << "Number of people?" << endl;
    cin >> num_people;
    
    /* Without type casting
    sweets_pp = total_sweets/num_people;
    cout << sweets_pp << endl;
    */
    
    sweets_pp = static_cast<double>(total_sweets)/num_people;
    cout << sweets_pp << endl;
    
    return 0;
}
