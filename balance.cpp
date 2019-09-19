#include "balance.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double totalBalance;

void balance::setBalance(double value) {
    totalBalance = value;
}

double balance::getBalance() {
    return totalBalance;
}

void balance::addToBalance(double value) {
    totalBalance = value;
}

void balance::subFromBalance(double value) {
    totalBalance = value;
}

