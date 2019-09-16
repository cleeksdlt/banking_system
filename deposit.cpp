#include "deposit.hpp"
#include <iostream>
#include <string>
#include <fstream>

void deposit::askAmount(double initAmount, double totalBalance) {
    string answer;
    fprintf(stdout, "Please enter how much you would like to deposit:$");
    cin >> initAmount;
    fprintf(stdout, "Is $%.2f correct?(y/n)\n", initAmount);
    cin >> answer;
    if(answer == "yes") 
        fprintf(stdout, "Thank you!\n");
        fprintf(stdout, "Adding balance to total ...\n");
        addAmount(initAmount, totalBalance);
    if(answer == "no")
        askAmount(initAmount, totalBalance);
}

void deposit::addAmount(double depositAmount, double totalBalance) {
    totalBalance = depositAmount + totalBalance;
    fprintf(stdout, "Done!\n");
}