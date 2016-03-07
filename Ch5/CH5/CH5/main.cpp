//
//  main.cpp
//  CH5
//
//  Created by Fred Naude on 2016/03/07.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//
// void function

#include <iostream>

//separates current output from previously run program
void initialize_screen();
//convert fahrenheit to celcius
double celcius(double fahrenheit);
//displays output. Assumes that c_degrees Celcius is equal to f_degrees
void show_results(double f_degrees, double c_degrees);

int main_0() {
    
    using namespace std;
    double f_temperature, c_temperature;
    
    initialize_screen();
    cout    << "I will convert a fahrenheit temperature"
            << " to Celcius.\n"
            << "Enter a temperature in Fahrenheit: ";
    cin >> f_temperature;
    
    c_temperature = celcius(f_temperature);
    
    show_results(f_temperature, c_temperature);
    
    return 0;
}

void initialize_screen(){
    using namespace std;
    cout << endl;
    return; //this return doesn't need to be here
}

double celcius(double fahrenheit){
    return ((5.0/9.0)*(fahrenheit - 32));
}

void show_results(double f_degrees, double c_degrees){
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout    << f_degrees
            << " degrees Fahrenheit is equivalent to \n"
            << c_degrees << " degrees Celcius.\n";
}
