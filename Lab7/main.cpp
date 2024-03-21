#include <iostream>
#include <fstream>

int main() {
    const int SAMPLE_SIZE = 10;
    int array_int[SAMPLE_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    string array_str[SAMPLE_SIZE] = {"This", "is", "a", "sentence. ",
                                    "This", "is", "another", "sentence.",
                                    "The", "end"};

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