#include <iostream>
using namespace std;
#include <cmath>
// declaring variables
int main() {
float bill;
float tip_percent;
float tip_amount ;
float total_bill; 
float final_bill;
 // asking user for input
  cout << "How much was the bill ?";
  cin >> bill ;
  // tip amount left by user
  cout << "How much tip do you want leave ? \n";
  cout << "\tEnter as a floating point number: .2 = 20%\n";
  cin >> tip_percent ;
//math
  tip_amount = bill * tip_percent ;
  total_bill = bill + tip_amount ;
  final_bill = static_cast<int>(total_bill);
  // out put 
  cout <<"Meal:\t\t" << bill << endl ;
  cout <<"Tip:\t\t" << tip_amount << endl ;
  
 

  cout << "TOTAL  $" << final_bill ;
  
  
  
}