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
    if (x > y){
        return true;
    }

    else if (x <= y) {

        return false;
    }
    
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

