#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief prints the elements in the vector and their memory location
 * 
 * @param v - vector of integers
*/
void printMemVec(vector<int> v){
    printf("Vector - each int is worth %lu byte \n", sizeof(v[0]));
    for(int i = 0; i < v.size(); i++){
        printf("Value : %i at Memory Location: %p\n", v[i], &v[i]);
    }
}

/**
 * @brief increments all of the elements in v by 10
 * 
 * @param v - address to a vector of integers
*/
void incVecBy10(vector<int>& v){
    for(int i = 0; i < v.size(); i++){
        v[i] += 10;
    }
}

int main(){
    int SIZE = 5;
    vector<int> v(SIZE);

    for(int i = 0; i < SIZE; i++){
        v[i] = 100 + i;
    }

    printf("Before Increment-------------------------------------\n");
    printMemVec(v);
    
    incVecBy10(v);

    printf("After Increment--------------------------------------\n");
    printMemVec(v);

    v.pop_back();

    printf("After Pop---------------------------------------------\n");
    printMemVec(v);

    v.push_back(101);
    v.push_back(102);

    printf("After Push--------------------------------------------\n");
    printMemVec(v);

    return 0;
}
