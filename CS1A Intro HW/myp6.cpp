/*
Write a C++ program that receives a number from the user and prints out 
its remainder to 2 on the screen. You can use % operator to calculate the 
remainder to a number. For example 109 % 2 will give us the remainder of 
109 to 2 which is equal to 1. 
*/

#include<iostream>
using namespace std; 
int main() {

    // Declaring variables
   int x;
   int y;

   cin >> x;
   
   y = x % 2;
   cout << y << endl;
   return 0;
}