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
void vecGen(string filename, vector<int> & v){
    ifstream file(filename);
    int num;
    v.clear();
    while (file.is_open() && file >> num){ // 'file >> num' is to attempt to read an int from file if succesful, it ends if there is no int and once the file reaches the end
        v.push_back(num);
    }
    file.close();
}
/**
 * @brief writes to file the time it took to search with respect to the
 * size of the vector, n
 * Number of Elements(n)    Time(s)
 * XXXX                     X.XXXXX
 * XXXX                     X.XXXXX
 * @param filename (string) : filename (e.g. output_10000_numbers.csv)
 * @param times (vector<double>) : average times 
 * @param n (vecotr<int>) : size of vectors
*/
void writeTimes(string filename, const vector<double> times, const vector<int> n){
    ofstream myFile(filename);
    
    myFile << "Number of Elements (n)\t Time (sec) " << endl;
    for(int i = 0; i < times.size(); i++){

        myFile << n[i] << "\t" << times[i] << "\n";
    }
    myFile.close();
    cout << "Wrote to " << filename << endl;
}
/**
 * @brief computes the average of the elements in vector, a
 * 
 * @param a vector of double 
 * @return double 
*/
double average(const vector<double> a){
    int sum = 0;
    for(int i = 0; i < a.size(); i++){
        sum = sum + a[i];
    }
    return sum/a.size();
}


int main(){
    // test elements to search for 
    vector<int> elem_to_find;
    vecGen("test_elem.csv", elem_to_find);
    // size (n) of all tests
    vector<int> file_sizes;
    vecGen("sizes.csv", file_sizes);

    //n list of numbers
    vector<double> v;

    //results of times
    vector<double> times;

    //results of times
    vector<double> avg;

    // create a for loop to iterate through the file sizes
        for(int i = 0; i < file_sizes.size()){
            //get the name/size of the file and assign it to string called filename
            filename = to_string(file_sizes[i]) + "_numbers.csv";
            //call vecGen on filename and v

            //print filename (this  will be good for debugging)

            //call times.clear() //this ensures that we reset times everytime we read a new file

            //create another for loop to iterate through the elements from elem_to_find
            //the code here should be nearly identical to the code from the previous lab
           




                //append the elapsed_time_in_sec to the vector, times(hint:pushback())
                //This code should be within the for loop that iterates
                // through all the elements from elem_to_find
            



            // call average on the vector, times, and save it as a double. This code should be
            // outside the for loop that iterates through all the elements from elem_to_find
            // but within the for loop that iterates through the file sizes



            // append the double to avg. (hint : push_back())
            // This code should be outside the for loop  that iterates through
            // all the elements from elem_to_find
            // but within the for loop that iterates through the file sizes 


    }

    //outside both for loops call writeTimes with the appropriate parameters
    // the first parameter should be "iterativeSearch_times.csv"
    // read the function breif to complete the rest of the parameters



    // call avg.clear() to reset avg, so we can use it for binarySearch


    // repeat the nested for loops used for iterativeSearch, but call binarySearch instead



    //outside both for loops call writeTimes with the appropriate parameters
    // the first parameter should be ""binarySearch_times.csv"
    // read the function brif to complete the rest of the parameters
}
