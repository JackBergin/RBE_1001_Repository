/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Exercise 15 
Description: ax, computed as ex ln a (where ln is the natural logarithm function)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Output on the command window
    cout << "Enter the a and x values:\n";
    
    //Creation of the a value
    double a;
    //Entering of the variable value
    cin >> a;
    
    //Creation of the x value
    double x;
    //Entering of the variable value
    cin >> x;
    
    //The required mathematical "action" for the problem
    double action = exp(x*log(a));
    
    //The output of the mathematical "action"
    cout << "The operation's solution is: " << action; 
}
