#ifndef DEPOSIT_HPP
#define DEPOSIT_HPP

#include <string>
#include <list>

using namespace std;

class deposit {
    public:
        void askAmount(double initAmount, double totalBalance);
        void addAmount(double depositAmount, double totalBalance);
};

#endif