/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

**********
Given four values representing counts of quarters, dimes, nickels and pennies, output the total amount as dollars and cents.

Output each floating-point value with two digits after the decimal point, which can be achieved by executing
cout << fixed << setprecision(2); once before all other cout statements.

Ex: If the input is:

4 3 2 1
where 4 is the number of quarters, 3 is the number of dimes, 2 is the number of nickels, and 1 is the number of pennies, the output is:

Amount: $1.41
For simplicity, assume input is non-negative.

363452.2406060.qx3zqy7
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   cout << fixed << setprecision(2);
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   
   /* Type your code here. */
   cin>> quarters;
   cin>> dimes;
   cin>> nickels; 
   cin>>pennies;
   
   
    dollars = ((quarters * 25.00) + (dimes * 10.00) + (nickels * 5.00) + pennies) / 100;
   cout << "Amount: $" << dollars<< endl;
   
   return 0;
}