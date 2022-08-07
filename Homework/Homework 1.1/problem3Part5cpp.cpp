/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Exercise 17 
Description: Solves the formula [2v^2sin(a)cos(a)]/g
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Output on the input window
    cout << "Enter the v, a, and g values you want put in the equation:\n"
    << "[2v^2sin(a)cos(a)]/g\n\n" ;
    
    //Output on the input window
    cout << "v value:\n";
    //Creation of the v value
    double v;
    //Entering of the variable value
    cin >> v;
    
    //Output on the input window
     cout << "a value: (in radians)\n";
    //Creation of the a value
    double a;
    //Entering of the variable value
    cin >> a;
    
    //Output on the input window
    cout << "g value:\n";
    //Creation of the g value
    double g;
    //Entering of the variable value
    cin >> g;
    
    //The required mathematical "action" for the problem
    double action = (2*pow(v,2)*sin(a)*cos(a))/g;
    
    //The output of the mathematical "action"
    cout << "The solution is: " << action; 
}
