#include <iostream>
#include <cstdlib>
using namespace std;
 

 /**
  * @brief returns the sum of three
  * 
  * @param x : (int)
  * @param y : (int)
  * @param z : (int)
  * @return int
 */

int sumOfThree(int x, int y, int z){

    return x + y + z;    

}

/** division
* @brief returns x / y
*
* @param x : (double)
* @param y : (double)
* @return double
*/

double division(double x, double y){

    return x / y;

}

/** isGreatherThan
* @brief returns whether x is greater than y
*
* @param x : (double)
* @param y : (int)
* @return true : x is greater than y
* @return false : x is less than or equal to y
*/
bool isGreaterThan(double x, int y){
    return x > y;
    
}

/** select
* @brief output the statements based on func_type
* func_type : output
* "sum" : "The sum is "
* "division" : "The quotient is "
* "comparison" : "The first value being greater than the second value is "
* All other phrases: "Invalid function type\n"
* @param func_type : (string)
* @return string
*/
string select(string func_type){
    string out = "";

    if  (func_type == "sum"){
        out = "The Sum is ";
    }
    else if (func_type == "division"){
        out = "The quotient is ";
    }
    else if (func_type == "comparison"){
        out = "The first value being greater than the second value is ";
    }
    else {
        out = "Invalid function type\n";
    }

    return out;

}

/** myPrint
 * @brief Calls select() to print out the output with the correct promopt
 * 
 * @tparam T : (int, double, or string) output of sum, division, or isGreater Than
 * @param func_type : (string)
 * @param output
*/
template <typename T>
void myPrint(string func_type, T output){

    cout << select(func_type) << output << endl;

}

int main()
{
    // initialize 3 int parameters
    int x1 = 2;
    int x2 = 3;
    int x3 = 5;

    // call sumOfThree
    int sum_out = sumOfThree(x1,x2,x3);
    // call myPrint
    myPrint("sum",sum_out);

    //initialize 2 double parameters
    double dividend = 12345.1;
    double divisor = 2345.6;

    // call division
    double div_out = division(dividend, divisor);
    myPrint("division", div_out);

    // compare div_out and sum_out
    bool is_greater_out = isGreaterThan(div_out, sum_out);
    myPrint("comparison", is_greater_out);
    return 0;
}


