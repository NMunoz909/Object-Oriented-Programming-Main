#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief prints the elements in the array and their memory locations
 * 
 * @param arr - array of integers
 * @param size - the nummber of elements in the array
*/
void printMemArr(const int * arr, int size){ // void printMemArr(int arr[], int size)
    printf("Array - each int is worth %lu byte \n", sizeof(arr[0]));
    for(int i = 0; i < size; i++){
        printf("Value : %i at Memory Location: %p\n", arr[i], arr + 1);
    }
}