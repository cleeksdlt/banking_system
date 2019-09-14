#include "deposit.hpp"
#include <iostream>
#include <string>
#include <fstream>

void deposit::askAmount(int val) {
    string answer;
    fprintf(stdout, "Please enter how much you would like to deposit:");
    cin >> val;
    fprintf(stdout, "Is %d correct?\n", val);
    cin >> answer;
}