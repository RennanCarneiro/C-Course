//declarating an array
#include <stdio.h>

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
// printf("%d", array[3]);
 
//lowest-grade example
int grades[10];
int lowest;
for(int i = 0; i<10;i++){

    printf("insert the grade number %d\n", i+1);
    scanf("%d", &grades[i]);

}
lowest = grades[0];
for (int i = 0; i < 10; i++)
{
    if(grades[i] < lowest)
        lowest = grades[i];
}

printf("Your lowest grades is: %d", lowest);

return 0;
}
