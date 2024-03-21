#include <iostream>
#include <fstream>

using namespace std;

/**
 * @brief writes sampel_size number of integers
 * Example output: if n = 3 and arr = [1,2,3]
 * 1
 * 2
 * 3
 * 
 * @param filename
 * @param arr
 * @param sample_size
*/
void writeToFile(string filename, int * arr, int sample_size){
    ofstream file(filename);
    int val;

    for(int i = 0; i < sample_size; i++){
        file << arr[i];
        file << "\n";
    }
    file.close();
    printf("Wrote to %s\n", filename.c_str());
}

/**
 * @brief writes sample_size number of strings
 * Example output: if n = 2 and arr = ["cat", "dog"]
 * cat
 * dog
 * @param filename
 * @param arr
 * @param sample_size
*/
void writeToFile(string filename, string * arr, int sample_size){

}

int main() {
    const int SAMPLE_SIZE = 10;
    int array_int[SAMPLE_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    string array_str[SAMPLE_SIZE] = {"This", "is", "a", "sentence. ",
                                    "This", "is", "another", "sentence.",
                                    "The", "end"};

    char array_char[SAMPLE_SIZE] = {'a', 'b', 'c', 'd', 'e', '0', '1', '2', '3', '4'};
    
    string int_file = "array_int.csv";
    writeToFile(int_file, array_int, SAMPLE_SIZE); // arr is already a pointer

    // do the same for the other arrays

    //CREATE a string variable as the filename and assign
    // it the value "array_str.csv"


    //CALL writeToFile using the string variable above, array_string, and SAMPLESIZE as
    //parameters


    //CREATE a string variable as the filename and assign
    // it the value ""array_char.csv"


    //CALL writeToFile using the string variable above, array_char, and SAMPLE_SIZE as
    //parameters



    //CALL readFile() on all three generated files.


    return 0;
}