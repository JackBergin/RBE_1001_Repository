/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Problem 4
Description: A program that inputs the voltage and three resistances 
in parallel and then calculates and displays the current.
*/

#include <iostream>
using namespace std;

int main()
{
  //gives values to the three resistors in the circuit
  cout << "What are your three resistance values?\n";
  
  //Resistance value 1
  double r1;
  //Entered resistance command
  cin >> r1;
  
  //Resistance value 2
  double r2;
  //Entered resistance command
  cin >> r2;
  
  //Resistance value 3
  double r3;
  //Entered resistance command
  cin >> r3;
  
  //Asks for the user to enter in the voltage
  cout << "What is your voltage value?\n";
  
  //Declares a double to store the entered voltage value
  double voltage;
  //Entered voltage command
  cin >> voltage;

  //Creates an algorithm to solve for total resistance 
  //in the circuit using the formula for finding   
  //resistance in a parallel circuit with three resistors
  double rTotal = 1 / ((1 / r1) + (1 / r2) + (1 / r3));
  
  //Ohms Law calculation:
  double amperage = voltage / rTotal;
  
  //Outputs the total resistance
  cout << "The current in this circuit is " << amperage << " amps.";
}

