#include <iostream>
#include <fstream>
#include <string>
#include "deposit.hpp"
#include "withdraw.hpp"
#include "balance.hpp"

using namespace std;

int main() {
    int val;
    deposit ddepo;
    withdraw wdraw;
    balance bbala;
    double totalBalance = 3000.00;

    fprintf(stdout, "Hello! Welcome to Freedom Banking\n");
    fprintf(stdout, "Here are a few options for you:\n");
    fprintf(stdout, "1. Deposit \n");
    fprintf(stdout, "2. Withdraw\n");
    fprintf(stdout, "3. Check Balance\n");
    fprintf(stdout, "4. Quit\n");

    cin >> val;

    if(val == 1) 
        ddepo.askAmount(val, totalBalance);

    if(val == 2)
        wdraw.askAmount(val, totalBalance);

    if(val == 3)
        bbala.setBalance(totalBalance);
        totalBalance = bbala.getBalance();
        fprintf(stdout, "Total Balance: %.2f\n", totalBalance);

    if(val == 4) {
        fprintf(stdout, "Thank you for choosing Freedom Banking!\n");
        fprintf(stdout, "Goodbye!\n");
        EXIT_SUCCESS;
    }
    return 0;
}