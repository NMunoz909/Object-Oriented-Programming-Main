#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;


/**
 * @brief returns the first index of elem if it exists, otherwise returns -1
 * iterativeSearch starts at the first index and interates sequentially to the next until it either
 * finds the element or until it reaches the end (i.e. element does not exist)
 * 
 * @param vc: vector of elements
 * @param elem : integer to look for
 * @return int
*/
int iterativeSearch(vector <int>v, int elem){
    // use a for loop where the index, i goes from 0 to the size of v

    // inside the for loop, use an if statement to check whether the element at i (e.g. v[i]) equals elem
    // inside the if statement return 1
    for( int i = 0; i < v.size(); i++){
        if(v[i] == elem){
            return i;
        }
    }
    // outside of the for loop return -1
    return -1;
}

/**
 * @brief return the index of elem, if it exists in v. Otherwise it return -1.
 * binarySearch is recursive (i.e. function calls itself).
 * it utilizes the fact that v is increasing order (e.g. values fo uo and
 * duplicates are not allowed)
 * 
 * It calculates the mid from the start and end index. It comares v[mid] (i.e. value
 * at mid) with elem and decides to search the left half(lower values)
 * or right half (upper values).
 * 
 * @param v : vector of elements
 * @param start : leftmost index (starting value is 0)
 * @param end : rightmost index (starting value is v.size())
 * @param elem : integer to look for
 * @return int
*/
int binarySearch(vector<int> & v, int start, int end, int elem){
    //write an if statement that checks the terminating case
    //inside the if statemant return -1
    if(start > end){
        return -1;
    }
    // instantiate the midpoint
    int mid = (start + end)/2;

    //Use if/else statements to do the following: (It made more sense to check mid first then following with the updates)
    if(v[mid] == elem){ // here mid is compared to see if it equals elem
        return mid;
    }
    else if(v[mid] >= elem){ // if it is not equal to elem we check if mid is greater than equal to elem
        end = mid - 1; // check left half by updating end
    }
    else if(v[mid] <= elem ){ // else if we check the if it is less than elem
        start = mid + 1;// check right half by updating start
    }
    // return a recursice call to binarySearch(...) 
    return binarySearch(v, start, end, elem);
}

/**
 * @brief updates V to contain the values from filename (leave as is)
 * 
 * It is expected that the files contain values ranging from one to
 * one hundred million in acsending order (no duplicates)
 * 
 * @param filename : string 
 * @param v : vector
*/
void vecGen(string filename, vector<int> & v){
    ifstream file(filename);
    int num;
    v.clear();
    while (file.is_open() && file >> num){ // 'file >> num' is to attempt to read an int from file if succesful, it ends if there is no int and once the file reaches the end
        v.push_back(num);
    }
    file.close();
}

int main(){
    
}
