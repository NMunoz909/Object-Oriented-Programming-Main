//Lab2_calc.cpp 
/***
 * {Create a program to display the difference bewteen dividing int vs int and int vs double}
***/ 

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //numerical
    int int_x = 1;
    int int_y = 2;
    double double_z = 2.0;

    cout << "int divided by int: " << int_x / int_y << endl; 
    cout << "int divided by double: " << int_x / double_z << endl;
}

