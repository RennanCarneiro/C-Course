//the program should find the MAX digit and print it to the screen
#include <stdio.h>
#include <string.h>

int main(){
    int number = 993380757;
    int max = -1;
    int numList[9];
    int i = 1;
    int temp = number;

    while(temp > i){ //Count how many digits are in 'number'
        temp /= 10;
        i++;
    }

    for(int j = i-1; j >= 0; j--){ //exctract the digit
        numList[j] = number % 10; //get the last digit
        number /=10;//remove last digit
        if(max < numList[j])
            max = numList[j];
    }

    for (int j = 0; j < i ; j++)
    {
        printf("%d", numList[j]);
    }
    printf("\nThe greatest digit is: %d", max);

}