
//  Created by Sandy on 3/17/23.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h> // standard library header file


#define MOMO_CHARGES 0.15
#define PIN 1234

// function prototypes
  void transferMoney();
  void momoUser();
  void momoPay();
  void airtimeBundles();
  void allowCashout();
  void financialServices();
  void wallet();
  void cls();
 int main(){
    cls();
    printf("......Welcome............\n");
    printf("1) Transfer Money\n");
    printf("2) MoMoPay & Pay Bill\n");
    printf("3) Airtime & Bundles\n");
    printf("4) Allow Cash Out\n");
    printf("5) Financial Services\n");
    printf("6) My Wallet\n");
    printf("..........................\n");
    printf("Select an option: ");
    int userOption;
    scanf("%d", &userOption);

    switch(userOption) {
        case 1:
            transferMoney();
            break;
        case 2:
            momoPay();
            break;
        case 3:
            airtimeBundles();
            break;
        case 4:
            allowCashout();
            break;
        case 5:
            financialServices();
            break;
        case 6:
           wallet();
            break;
        default:
            main();
    }


    return 0;
}

// clear screen
 void cls() {
    system("cls"); // system("cls") -> windows;
}


// Transfer Money
 void transferMoney() {
    cls();
    printf("......Transfer Money............\n");
    printf("1) MoMo User\n");
    printf("2) Non-MoMo User\n");
    printf("3) Send with Care\n");
    printf("4) Favorite\n");
    printf("5) Other Networks\n");
    printf("6) Bank Account\n");
    printf("0) Back\n");
    printf("..........................\n");
    printf("Select a money transfer option: ");

    int userTransferMoneyOption;
    scanf("%d", &userTransferMoneyOption);

    switch(userTransferMoneyOption) {
        case 0:
            main();
            break;
        case 1:
            momoUser();
            break;
        default:
            printf("In progress\n");
    }
}

/*
 MoMo User
 Transfer Money -> MoMo User
*/
void momoUser() {
    cls();
    printf("Enter mobile number: "); // s-1
    int momoNumber;
    scanf("%d", &momoNumber);

    printf("Confirm mobile number: "); // s-2
    int confirmMomoNumber;
    scanf("%d", &confirmMomoNumber);

    if (momoNumber == confirmMomoNumber) {
        // let the person to enter amount
        printf("Enter Amount: ");
        float amount;
        scanf("%f", &amount);

        // Let's assume the transfer okay
        printf("Transfer complete 😁");
    } else {
        momoUser();
    }
}


// MOMO Pay & Pay Bills
void momoPay() {
    cls();
    printf("......MoMoPay & Pay Bill............\n");
    printf("1. MoMoPay\n");
    printf("2. Pay Bill\n");
    printf("3. GhQR\n");
    printf("0. Back\n"); // ✅
    printf("..........................\n");
    printf("Select an option: ");

    int userMomoPayOption;
    scanf("%d", &userMomoPayOption);

    switch(userMomoPayOption) {
        case 0:
            main();
            break;
        default:
            printf("In progress\n");
    }
}

// Airtime & Bundles
void airtimeBundles() {
    cls();
    printf("......Airtime & Bundles............\n");
    printf("1. Airtime\n");
    printf("2. Internet Bundles\n");
    printf("3. Fixed Broadband\n");
    printf("4. Scheduled Airtime\n");
    printf("0. Back\n");
    printf("..........................\n");
    printf("Select an option: ");

    int userAirtimeBundleOption;
    scanf("%d", &userAirtimeBundleOption);

    switch(userAirtimeBundleOption) {
        case 0:
            main();
            break;
        default:
            printf("In progress\n");
    }
}


// Allow Cashout
  void allowCashout() {
    cls();
    printf("......Allow Cash Out............\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("0. Back\n");
    printf("..........................\n");
    printf("Select an option: ");

    int userCashOutOption;
    scanf("%d", &userCashOutOption);

    switch(userCashOutOption) {
        case 0:
            main();
            break;
        case 1:
            printf("Cash out is Allowed");
            break;
        case 2:
            printf("Cash out is not Allowed");
            break;
        default:
            allowCashout();
    }
}


// Financial Services
  void financialServices() {
    cls();
    printf("......Financial Services............\n");
    printf("1. Bank Services\n");
    printf("2. Savings\n");
    printf("3. Loans\n");
    printf("4. Pension and Investments\n");
    printf("5. Insurance\n");
    printf("6. Trade Shares\n");
    printf("0. Back\n"); // ✅
    printf("..........................\n");
    printf("Select an option: ");

    int userFinancialServiceOption;
    scanf("%d", &userFinancialServiceOption);

    switch(userFinancialServiceOption) {
        case 0:
            main();
            break;
        default:
            printf("In progress\n");
    }
}

// Wallet
void wallet() {
    cls();
    printf("......My Wallet............\n");
    printf("1. Check Balance\n");  // ✅
    printf("2. Allow Cash Out\n"); // ✅
    printf("3. My Approvals\n");
    printf("4. Report Fraud\n");
    printf("5. Statements\n");
    printf("6. Change & Reset PIN\n");
    printf("7. Airtime\n");
    printf("8. Check Wallet Limits\n");
    printf("9. Favorite\n");
    printf("10. Name & Next of Kin\n");
    printf("0. Back\n");
    printf("..........................\n");
    printf("Select an option: ");

    int userWalletOption;
    scanf("%d", &userWalletOption);

    switch(userWalletOption) {
        case 0:
            main();
            break;
        case 1:
            // implement check balance
            printf("Fee is GHS 0.00. Enter MM PIN\n");
            int userPin;
            scanf("%d", &userPin);
            if (userPin == PIN) {
                printf("Current Balance: GHS 1000.00\n");
                 printf("Available Balance: GHS 1000.00\n");
            } else {
                printf("Incorrect Pin\n");
            }
            break;
        case 2:
            allowCashout();
            break;
        default:
            printf("In progress\n");
    }
}
