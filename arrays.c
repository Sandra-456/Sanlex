#include <stdio.h>
#include <stdlib.h>
/*
Task:Calculation of swa
*/

int main()
/*
{   int marks[8], creditHours[8];

    printf("Enter your 8 marks:");
    scanf("%d %d %d %d %d %d %d %d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4],&marks[5],&marks[6],&marks[7]);

    printf("Enter your 8 credit hours:");
    scanf("%d %d %d %d %d %d %d %d",&creditHours[0],&creditHours[1],&creditHours[2],&creditHours[3],&creditHours[4],&creditHours[5],&creditHours[6],&creditHours[7]);

    for(int i = 0; i<=7; i++){
        totalCreditHours += creditHours[i];

        total += (marks[i]* creditHours[i]);
    }*/


{    int marks[6] , creditHours[6];
    float totalCreditHours = 0, totalMarks = 0;


    for(int j = 0; j<=6; j--){
       printf("Enter your marks & credit hours:");
       scanf("%d %d", &marks[j] , &creditHours[j]);

        totalCreditHours += creditHours[j];

        totalMarks += marks[j] * creditHours[j];



}

        float SWA = totalMarks / totalCreditHours;
        printf("Your SWA is: %.2f\n",SWA);

   return 0;
}
