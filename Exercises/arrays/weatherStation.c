/*read temperature from user for 7 days
calculate and print
-average T
-hottest day 
-coldest day
*/
#include <stdio.h>
#define DAYS 7

int main(){
    float semana[DAYS];
    float hottest, average, coldest;
    int i;

    printf("Insert the Temperature: ");

     for (i = 0; i < DAYS; i++) {
        scanf("%f", &semana[i]);

        if (i == 0) { 
            hottest = coldest = semana[i];
        }

        if (semana[i] > hottest) {
            hottest = semana[i];
        }

        if (semana[i] < coldest) {
            coldest = semana[i];
        }

        average += semana[i];
    }
    average /= DAYS;

    printf("The hottest temperature was: %.2f", hottest);
    printf("\nThe coldest temperature was: %.2f", coldest);
    printf("\nThe average temperature was: %.2f", average);

}