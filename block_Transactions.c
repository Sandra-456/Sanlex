#include <stdio.h>
#include <stdlib.h>


      #define blockTransactions 2000
      #define coreTime 0.5
 float Timeet(int blocks,int cores){
      int totalTransactions =  blockTransactions*blocks;
      float totalCoreTime = coreTime*cores;
      float timeUsed = totalTransactions/totalCoreTime;
      float hours = timeUsed/3600;
          return hours;

       }



 int main(){
  int blockNumber,coreNumber;
  printf("Enter the number of Bitcoin blocks:");
  scanf("%d",&blockNumber);
  printf("\nEnter the number of CPU cores:");
  scanf("%d",&coreNumber);
 float hours =Timeet(blockNumber,coreNumber);
 printf("\nHours required: %.2f");



    return 0;
}
