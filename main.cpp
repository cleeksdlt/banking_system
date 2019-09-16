#include <iostream>
#include <fstream>
#include <string>
#include "deposit.hpp"
#include "withdraw.hpp"

using namespace std;

int main() {
    int val;
    deposit depo;
    withdraw wdraw;
    double totalBalance = 3000.00;

    fprintf(stdout, "Hello! Welcome to Freedom Banking\n");
    fprintf(stdout, "Here are a few options for you:\n");
    fprintf(stdout, "1. Deposit \n");
    fprintf(stdout, "2. Withdraw\n");
    fprintf(stdout, "3. Check Balance\n");
    fprintf(stdout, "4. Quit\n");

    cin >> val;

    if(val == 1) 
        depo.askAmount(val, totalBalance);

    if(val == 2)
        wdraw.askAmount(val, totalBalance);

    if(val == 3)
        fprintf(stdout, "Number 3 picked\n");

    if(val == 4)
        EXIT_SUCCESS;

    return 0;
}