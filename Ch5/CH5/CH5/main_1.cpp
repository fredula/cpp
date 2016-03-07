//
//  main_1.cpp
//  CH5
//
//  Created by Fred Naude on 2016/03/07.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
//  using call by reference to swap two numbers

#include <iostream>

//reads to integers from the keyboard
void get_numbers(int& input1, int& input2);
//interchanges the values of variable1 and variable2
void swap_values(int& variable1, int&variable2);
//shows the value of variable1 and variable2 in that order
void show_results(int output1, int output2);

int main(){
    int first_num, second_num;
    
    get_numbers(first_num, second_num);
    swap_values(first_num, second_num);
    show_results(first_num, second_num);
    return 0;
}

void get_numbers(int& input1, int& input2){
    using namespace std;
    cout << "Enter two integers: ";
    cin >> input1
        >> input2;
}

void swap_values(int& variable1, int&variable2){
    int temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}

void show_results(int output1, int output2){
    using namespace std;
    cout    << "The two integers swapped are : "
            << output1 << " " << output2 << endl;
}
