#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[100], creditHours[100];
    char fullName[20], indexNumber[20], referenceNumber[10];
    int numberOfCourses;
    int  totalMarks = 0,totalCreditHours = 0,total = 0;


    printf("........WELCOME TO THE REPORT GENERATION SYSTEM..........\n");

    printf(" ENTER YOUR FULL NAME:");
    scanf("%s", &fullName);

    printf("\n ENTER YOUR INDEX NUMBER: ");
    scanf("%s", &indexNumber);

    printf("\n ENTER YOUR REFERENCE NUMBER:");
    scanf("%s", &referenceNumber);

    printf("\n ENTER THE NUMBER OF COURSES:");
    scanf("%d", &numberOfCourses);

    char courseCode[numberOfCourses][10];

    for (int i = 0; i < numberOfCourses; i++) {
        printf("\n ENTER YOUR COURSE CODE, MARKS AND CREDIT HOURS:");
        scanf("%s %d %d", courseCode[i], &marks[i], &creditHours[i]);
        totalCreditHours += creditHours[i];
        totalMarks = marks[i]*creditHours[i];
        total += totalMarks;




    }

    printf("....................................\n");
    printf(".................SWA REPORT......................\n");
    printf("...............................................\n");
    printf("NAME:%s\n",fullName);
    printf("INDEX NUMBER:%s\n",indexNumber);
    printf("REFERENCE NUMBER:%s\n",referenceNumber);
    printf("...........................................................\n");


        printf("Course Code \t|     Mark     \t|    Credit Hour(s)    \t|    Total marks      \t|  \n");
        printf("........................................................................................\n");

   for (int i = 0; i < numberOfCourses; i++){

        printf("%s           \t|     %d       \t|    %d               \t|     %d              \t|  \n",courseCode[i],marks[i],creditHours[i],marks[i] * creditHours[i]);
        printf("........................................................................................\n");

}

      float SWA = total / totalCreditHours;
       printf("                                           SWA        \t|      %.2f         \t|   \n",SWA);
       printf(".........................................................................................\n");






    return 0;


}
