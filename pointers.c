#include <stdio.h>
#include <stdlib.h>

int main()
{ int tuna = 19;
    printf("Address \t Name \t Value \n");
    int * ptuna = &tuna ;
    printf("%p \t %s \t %d \t \n ",&ptuna ,"tuna", tuna);

    return 0;
}
