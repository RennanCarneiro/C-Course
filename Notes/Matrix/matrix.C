#include <stdio.h>
#define rows 2
#define column 2

int main(){
    //declaration
    int matrix[2][2];
    int matrix2[3][3] = {{3,2},{2,1}} ;// {{3,2,0}, {2,1,0}, {0,0,0}}
    int matrix3[2][3] = {5,2,1,6,5} ;// {{5,2,1}, {6,5,0}}

    //acessing
    matrix[2][1]; //{2}
    matrix2[2][2] = 4; // {{3,2,0}, {2,4,0}, {0,0,0}}
    printf("%d", matrix[1][1]);

    //input
    int matrix4[rows][column];
    for(int i = 1; i < rows; i++){
        for(int j = 1; j < column; j++){
            scanf("%d", &matrix4[i][j]);
        }
    }
}