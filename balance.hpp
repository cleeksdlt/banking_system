#ifndef BALANCE_HPP
#define BALANCE_HPP

#include <string>
#include <list>

using namespace std;

class balance {
    public:
        void addToBalance(double value);
        void subFromBalance(double value);
        void setBalance(double value);
        double getBalance();

};

#endif