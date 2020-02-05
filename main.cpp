#include "fractionType.h"
#include "fractionType.cpp"
#include <windows.h>

using namespace std;

//Define main
int main()
{
     //Define num1
     fractionType num1(5, 6); //Line 1

     //Define num2
     fractionType num2; //Line 2

     //Define num2
     fractionType num3; //Line 3

     //Display results
     cout << fixed; //Line 4
     cout << showpoint; //Line 5
     cout << "Line 7: Num1 = " << num1 << endl; //Line 7
     cout << "Line 8: Num2 = " << num2 << endl; //Line 8

     //Get user input
     cout << "Line 9: Enter the fraction " << "in the form a / b: "; //Line 9

     //Store value
     cin >> num2; //Line 10
     cout << endl; //Line 11

     //Display value
     cout << "Line 12: New value of num2 = " << num2 << endl;   //Line 12

     //Compute sum
     num3 = num1 + num2; //Line 13

     //Display num3
     cout << "Line 14: Num3 = " << num3 << endl; //Line 14

     //Display sum
     cout << "Line 15: " << num1 << " + " << num2 << " = " << num1 + num2 << endl; //Line 15

     //Display product
     cout << "Line 16: " << num1 << " * " << num2 << " = " << num1 * num2 << endl; //Line 16

     //Compute subtraction
     num3 = num1 - num2; //Line 17

     //Display num 3
     cout << "Line 18: Num3 = " << num3 << endl; //Line 18

     //Display result
     cout << "Line 19: " << num1 << " - " << num2 << " = " << num1 - num2 << endl; //Line 19

     //Display quotient
     cout << "Line 20: (" << num1 << ") / (" << num2 << ") = " << num1 / num2 << endl; //Line 20

     //Display results
     cout << "Line 21: (" << num1 << ") <= (" << num2 << ") = " << (num1 <= num2) << endl; //Line 21
     cout << "Line 22: (" << num1 << ") == (" << num2 << ") = " << (num1 == num2) << endl ; //Line 22
     cout << "Line 23: (" << num1 << ") >= (" << num2 << ") = " << (num1 >= num2) << endl ; //Line 23
     cout << "Line 24: (" << num1 << ") != (" << num2 << ") = " << (num1 != num2) << endl ; //Line 24
     cout << "Line 25: (" << num1 << ") > (" << num2 << ") = " << (num1 > num2) << endl; //Line 25
     cout << "Line 26: (" << num1 << ") < (" << num2 << ") = " << (num1 < num2) << endl; //Line 26

     //Pause console window
     system("pause");

     return 0;
}
