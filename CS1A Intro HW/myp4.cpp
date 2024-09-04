/*
Write a C++ Program that declares 4 variables (all integer) and reads value from 
3 of them and stores (value1 + value2) * value3 into the fourth variable and print 
the result on the screen. If value1 is 10 and value2 is 20 and value3 is 3, the 
value 90 should be printed on the screen.
*/
#include <iostream>
using namespace std;
int main(){

    // Declaring variables
    int val1 = 10;
    int val2 = 20;
    int val3 = 3;

    int ans = (val1 + val2) * val3;

    cout << "The answer is: " << ans << endl;

    return 0;
}