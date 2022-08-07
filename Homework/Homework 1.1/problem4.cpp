/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Exercise 3 
Description: A program to convert a measurement given in feet to the 
equivalent number of (a) yards, (b) inches, (c) centimeters, and (d) meters
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Output on the input window
    cout << "Enter the measurement value in feet:\n";
    
    //Creation of the feet value
    double feet;
    //Entering of the variable value
    cin >> feet;
    
    //yards conversion
    double yards = feet/3;
    
    //inches conversion
    double inches = feet*12;
    
    //centimeters conversion
    double centimeters = inches*2.54;
    
    //meters conversion
    double meters = centimeters/100;
    
    //Outputs on the input window
     cout << "Your measurement of " << feet << " foot/feet is:\n";
     cout << "A) Yards conversion: " << yards << " yards\n";
     cout << "B) Inches conversion: " << inches << " inches\n";
     cout << "C) Centimeters conversion: " << centimeters << " centimeters\n";
     cout << "D) Meters conversion: " << meters << " meters\n";
}
