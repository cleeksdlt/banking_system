#include "withdraw.hpp"
#include <iostream>
#include <fstream>
#include <string>

void withdraw::askAmount(double initAmount, double totalBalance) {
    string answer;
    fprintf(stdout, "Please enter how much you would like to withdraw $");
    cin >> initAmount;
    fprintf(stdout, "Is $%.2f correct?(y/n)\n", initAmount);
    cin >> answer;
    if(answer == "yes") 
        fprintf(stdout, "Thank you!\n");
        fprintf(stdout, "Withdrawing from total balance ...\n");
        subAmount(initAmount, totalBalance);
    if(answer == "no")
        askAmount(initAmount, totalBalance);
}

void withdraw::subAmount(double withdrawAmount, double totalBalance) {
    totalBalance = totalBalance - withdrawAmount;
    fprintf(stdout, "Done!\n");
}