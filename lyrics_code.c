#include <stdio.h>
#include <stdlib.h>

int main(){


    for(int i = 99;i>0;i--){

        printf("%d bottles of beer on the wall,%d bottles of beer.\n",i,i);
        printf("Take one down, pass it around, %d",i-1);


    if(i-1 == 1){
        printf("bottle");

    }else{
        printf("bottles of beer on the wall.\n\n");
    }

      }
       printf("No more bottles of beer on the wall, no more bottles of beer.\n");
       printf("Go to the store and buy some more, 99 bottles of beer on the wall.\n");

    return 0;
}
