//
//  main_8_toupper.cpp
//  Ch6
//
//  Created by Fred Naude on 2016/04/24.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
//  This is a file that shows how to get toupper and tolower methods to return characters and not int
//  int is the default thats returned by these methods

#include <stdio.h>
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    
    //if we place the value that needs to be made uppercase in a char variable, it will return the character
    char c = toupper('a');
    cout << c << endl;
    
    //to a type coercion of the character
    cout << toupper('b') << endl;
    cout << static_cast<char>(toupper('b')) << endl;
    cout << tolower('D') << endl;
    cout << static_cast<char>(tolower('D')) << endl;
    
    return 0;
}


