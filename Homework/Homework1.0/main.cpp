/*
Name: Jack Bergin
Date: 01/17/20
Class: RBE 1001
Description: Program used to find the resistance of a parallel circuit with three resistors.

Exercise:
The problem's objects would be the first, second, and third resistors, as well as the total
resistance which will be the value of the algorithm. The three resistor values will be 
entered by the user and stored as doubles. The total resistance value will be stored in a 
double data type as well. Once cout is declared, the entering of resistance values will follow in suit.
From here the variables will be plugged into the formula of combined resistance for a parallel circuit 
which will act as the program's algorithm to solve for total resistance:

RTotal = 1/(1/R1+1/R2+1/R3)

Once this is completed, we can then output the value of total resistance in the command 
window using the cout command.
*/
#include <iostream>
using namespace std;

int main ()
{
  //gives values to the three resistors in the circuit
  cout << "Enter your three resistance values:\n";
  
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

  //Creates an algorithm to solve for total resistance in the circuit using the formula for finding   
  //resistance in a parallel circuit with three resistors
  double rTotal = 1 / ((1 / r1) + (1 / r2) + (1 / r3));

  //Outputs the total resistance
  cout << "The total amount of resistance in this parallel circuit is " << rTotal << ".";
}
