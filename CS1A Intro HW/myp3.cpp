/* 
Write a C++ Program that declares 3 variables x, y and z (all integer) and 
reads value of x and y from the input and assigns sum of those two numbers 
to z and prints z on the scree
*/
#include<iostream>
using namespace std; 
int main() {
   // Declaring variables
  int x;
  int y; 
  int z;
  
  // Prompting user for input x
  cout << "x: ";
  cin >> x ;

   // Prompting user for input y
  cout << "y: ";  
  cin >> y ;
  
  z = x + y;

  cout << "z: " << z << endl;
  return 0;
}