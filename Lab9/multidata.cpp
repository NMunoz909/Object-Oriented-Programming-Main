#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
#include <chrono>
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
template<typename T>
int iterativeSearch(vector <T>v, int elem){
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
template<typename T>
int binarySearch(vector<T> & v, int start, int end, int elem){
    //write an if statement that checks the terminating case
    //inside the if statemant return -1
    if(start > end){
        return -1;
    }
    // instantiate the midpoint
    int mid = (start + end)/2;

    //Use if/else statements to do the following: 
    if(v[mid] > elem){
        end = mid -1;
    }else if(v[mid] < elem){
        start = mid + 1;
    }
    else return mid;

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
template<typename T>
void vecGen(string filename, vector<T> & v){
    ifstream file(filename);
    int num;
    v.clear();
    while (file.is_open() && file >> num){ // 'file >> num' is to attempt to read an int from file if succesful, it ends if there is no int and once the file reaches the end
        v.push_back(num);
    }
    file.close();
}

int main(){
    // populate v with 10000 sorted numbers (leave as is)
    vector<int> v;
    vecGen("10000_numbers.csv", v);

    // test elements to search for(leave as is)
    vector<int> elem_to_find;
    vecGen("test_elem.csv", elem_to_find);


    // reads through all 10 of the test_elem values and calls iterative search
    // and records how long each search took (leave as is)
    for(int i = 0; i < elem_to_find.size(); i++){
        // gets the elem to search for 
        int elem = elem_to_find[i];

        // stopwatches the time
        auto start = chrono::high_resolution_clock::now();                // start time
        int index_if_found = iterativeSearch(v,elem);   // call search
        auto end = chrono::high_resolution_clock::now();

        //calculates the total time it took in seconds 
        auto duration = chrono::duration_cast<std::chrono::microseconds>(end - start);

        // prints the index and how long it took to find it
        cout << "Time taken by iterativeSearch "
              << duration.count() << " microseconds" << endl; 
    }

    //repeat the for loop above so that it records the time
    // it takes for binarySearch to do the same operation
    for(int i = 0; i < elem_to_find.size(); i++){
        // gets the elem to search for 
        int elem = elem_to_find[i];
        int start_v = 0;
        int end_v = v.size() - 1;

        // stopwatches the time
        auto start = chrono::high_resolution_clock::now();                
        int index_if_found = binarySearch(v, start_v, end_v, elem);   
        auto end = chrono::high_resolution_clock::now();

        
        auto duration = chrono::duration_cast<std::chrono::nanoseconds>(end - start);

        
        cout << "Time taken by binarySearch "
              << duration.count() << " nanoseconds" << endl; 
    }

}
