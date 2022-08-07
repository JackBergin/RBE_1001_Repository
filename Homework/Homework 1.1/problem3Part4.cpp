/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Exercise 16 
Description: The real quantity amount rounded to the nearest hundredth
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Output on the command window
    cout << "Enter the amount you want rounded:\n";
    
    //Creation of the roundAmount value
    double roundAmount;
    //Entering of the variable value
    cin >> roundAmount;
    
    //The required mathematical "action" for the problem
    int roundTask = round(roundAmount);
    
    //The output of the mathematical "action"
    cout << "The rounded solution is: " << roundTask; 
}
