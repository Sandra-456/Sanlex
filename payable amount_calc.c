#include <stdio.h>
#include <stdlib.h>

int main()

{   float monday;
    monday = 120*1200*0.3;
    printf("Monday:                                            % .2f\n",monday);

    float tuesday;
    tuesday = 110*1350*0.3;
    printf("Tuesday:                                            % .2f\n",tuesday);

    float wednesday;
    wednesday = 95*1100*0.3;
    printf("Wednesday:                                           % .2f\n",wednesday);

    float thursday;
    thursday = 125*1400*0.3;
    printf("Thursday:                                           % .2f\n",thursday);

    float friday;
    friday = 114*1300*0.3;
    printf("Friday:                                           % .2f\n",friday);
    printf("**************************************************************************\n");

    float totalpayableamount ;
    totalpayableamount = monday + tuesday + wednesday + thursday + friday;
    printf("Total Weekly Payable Amount (GHC):  %.2f\n" ,totalpayableamount);
    printf("**************************************************************************\n");




    return 0;
}
