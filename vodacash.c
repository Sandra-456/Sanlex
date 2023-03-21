#include <stdio.h>
#include <stdlib.h>


void sendMoney();
void withdrawCash();
void buyAirtime();
void makePayments();
void financialServices();
void myAccount();
void selfService();
void cls();


int main()
{   cls();
    printf("*****************WELCOME*********************\n");
    printf("1 Send Money\n");
    printf("2 Withdraw Cash\n");
    printf("3 Buy Airtime or Data\n");
    printf("4 Make Payments\n");
    printf("5 Financial Services\n");
    printf("6 My Account\n");
    printf("7 Self Service\n");
    printf("********************************************\n");
    printf("Enter Vodacash option number:");
    int optionNumber;
    scanf("%d", &optionNumber);

    switch (optionNumber){
       case 1:
           sendMoney();
              break;

       case 2:
           withdrawCash();
              break;

       case 3:
           buyAirtime();
              break;

       case 4:
           makePayments();
              break;

       case 5:
           financialServices();
              break;

       case 6:
           myAccount();
              break;

       case 7:
           selfService();
              break;
        default:main();
       }


    return 0;
    }


    void cls(){
        system("cls");
    }

 void sendMoney(){
     cls();
    printf("*****************************Send Money*************************\n");
    printf("1 Vodafone Network\n");
    printf("2 Other Networks\n");
    printf("3 To Bank Account\n");
    printf("4 E-zwich\n");
    printf("5 From Linked Bank Account\n");
    printf("6 To Unregistered\n");
    printf("0 Back\n");
    printf("********************************************\n");
    printf("Enter Send Money option number:");
    int sendMoneyoptionNumber;
    scanf("%d", &sendMoneyoptionNumber);


    switch (sendMoneyoptionNumber){
       case 0:
            main();
            break;
       case 1:
           cls();
          printf("....................Choose the receiver.......................\n");
          printf("1 To enter recipient number \n ");
          printf("2 My List\n");
          printf("0 Return to Main Menu \n");
                    break;

       case 2:
           cls();
          printf(".....................Please Choose network......................\n");
          printf("1 MTN \n");
          printf("2 AirtelTigo \n");
          printf("3 G-Money \n");
          printf("4 ZeePay\n");
          printf("5 GhanaPay\n");
                  break;

       case 3:
           cls();
          printf("...................Select your bank starting with alphabet:.................\n");
          printf("1 A-D \n");
          printf("2 E-F \n");
          printf("3 G-R \n");
          printf("4 S-Z \n");
          printf("0 Return to Main Menu \n");
                  break;
       case 4:
           cls();
          printf("Enter Account Number: \n");
                 int accountNumber;
                scanf("%d",&accountNumber);

          printf("Enter recipient account number again: \n");
                 int recipientAccountnumber;
                scanf("%d",&recipientAccountnumber);
                 if(accountNumber==recipientAccountnumber){
                 float amount;
                printf("Enter Amount:\n");
                    scanf("%f",&amount);
                    printf("Your Vodafone Cash balance is GHS 343.00\n");
                    printf("This transaction was FREE! Your E-levy charge is GHS0.00\n");
                    printf("E-levy now reduced to 1%. Do more with Vodafone Cash!\n");
                    printf("Reference: Benita\n");                           }
                            break;


       case 5:
          printf("........................Select your bank........................\n");
          printf("1 A-D\n");
          printf("2 E-G\n");
          printf("3 H-R\n");
          printf("4 S-Z\n");
                 break;
       case 6:
          printf("...............A voucher will be generated for withdrawal at an Agent Point by the receiver..............\n");
          printf("1 To enter recipient number\n");
          printf("2 My List\n");
            break;
       default:
       printf("in progress\n");

}


}


 void withdrawCash(){
      cls();
    printf("***********************Withdraw Cash*************************\n");
    printf("1 From Agent\n");
    printf("2 To ATM\n");
    printf("0 Back\n");
    printf("********************************************\n");
    printf("Enter Withdraw Cash option number:");
    int withdrawCashoptionNumber;
    scanf("%d", &withdrawCashoptionNumber);


    switch (withdrawCashoptionNumber){
       case 0:
            main();
            break;
       case 1:
          withdrawCash();
            break;
       default:
    printf("in progress\n");

}

}
 void buyAirtime(){
       cls();
    printf("*************************Buy Airtime or Data*************************\n");
    printf("1 Buy Airtime\n");
    printf("2 Buy Data/ 2 Moorch\n");
    printf("3 Special Offers\n");
    printf("*********************************************************************\n");
    printf("Enter Buy Airtime option number:");
    int buyAirtimeoptionNumber;
    scanf("%d", &buyAirtimeoptionNumber);


    switch (buyAirtimeoptionNumber){
       case 0:
            main();
            break;
       case 1:
          buyAirtime();
       default:
  printf("in progress\n");

 }

}




 void makePayments(){
      cls();
    printf("***********************Make Payments*************************\n");
    printf("1 Pay Bill\n");
    printf("2 Buy Goods\n");
    printf("3 Fun and Games\n");
    printf("4 Generate Voucher\n");
    printf("5 My List \n");
    printf("6 Pay Small Small\n");
    printf("7 Donations\n");
    printf("8 Complete Payment/Transaction\n");
    printf("9 Schemes\n");
    printf("10 School Payments\n");
    printf("0 Back\n");
    printf("********************************************\n");
    printf("Enter  Make Payments option number:");
    int makePaymentsoptionNumber;
    scanf("%d", &makePaymentsoptionNumber);


    switch (makePaymentsoptionNumber){
       case 0:
            main();
            break;
       case 1:
          makePayments();
            break;
       default:
    printf("in progress\n");



}
}
 void financialServices(){
       cls();
    printf("***********************Select Option*************************\n");
    printf("1 Insurance\n");
    printf("2 Pensions\n");
    printf("4 Overdraft\n");
    printf("5 Savings\n");
    printf("6 Bank Services\n");
    printf("0 Back\n");
    printf("********************************************\n");
    printf("Enter option number:");
    int financialServicesoptionNumber;
    scanf("%d", &financialServicesoptionNumber);


    switch (financialServicesoptionNumber){
       case 0:
            main();
            break;
       case 1:
          financialServices();
            break;
       default:
    printf("in progress\n");
}
 }
 void myAccount(){
      void cls(){}
    printf("***********************My Account*************************\n");
    printf("1 Check Balance\n");
    printf("2 My Statements\n");
    printf("3Change Pin\n");
    printf("4 Account Information\n");
    printf("5 My List\n");
    printf("6 Help\n");
    printf("7 Self-Service\n");
    printf("0 Back\n");
    printf("********************************************\n");
    printf("Enter My Account option number:");
    int myAccountoptionNumber;
    scanf("%d", &myAccountoptionNumber);


    switch (myAccountoptionNumber){
       case 0:
            main();
            break;
       case 1:
          myAccount();
            break;
       default:
    printf("in progress\n");
    }


    }

  void selfService(){
        cls();
    printf("***********************Select Action*************************\n");
    printf("1 Reset PIN\n");
    printf("2 Self-Reversal(Vodafone/Voucher\n");
    printf("3 Request Reversal(Other Networks)");
    printf("********************************************\n");
    printf("Enter Self Service option number:");
    int selfServiceoptionNumber;
    scanf("%d", &selfServiceoptionNumber);


    switch (selfServiceoptionNumber){
       case 0:
            main();
            break;
       case 1:
          selfService();
            break;
       default:
    printf("in progress\n");
    }

    }









