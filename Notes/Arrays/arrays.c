//declarating an array
#include <stdio.h>

#define SIZE 8

int main()
{
 int array [4] = {1,2,3,4};
 double array_decimal [3] = {1.2,1.3,1.4};
 char nome [6] = {'R','e','n','n','a','n'};

 //counter arrays. used to solve array's problems
 int arr[5] = {0}; // int arr[5] = {0,0,0,0,0}
 int arr2[5] = {1,2}; // int arr2[5] = {1,2,0,0,0}

 //modifying an array
 arr[4] = 3;

 //acccess an element <array> [index]
//using the define 
int arr5[SIZE];
for(int i = 0; i < SIZE; i++){
    arr5[i] = i*3;
}
}
