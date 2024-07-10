#include <stdio.h>
#include <stdlib.h>

int mul(int x){
    return x * 2;
}
int main()
{
    int a = 1 ;

    int b = a + mul(5);
    printf("b is %d\n", b);
    return 0;
}
