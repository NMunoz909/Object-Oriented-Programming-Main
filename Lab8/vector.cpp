#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief prints the elements in the vector and their memory location
 * 
 * @param v - vector of integers
*/
void printMemVec(vector<int>& v, int size){
    printf("Vector - each int is worth %lu byte \n", sizeof(v[0]));
    for(int i = 0; i < size; i++){
        printf("Value : %i at Memory Location: %p\n", v[i], &v[i]);
    }
}