#ifndef WITHDRAW_HPP
#define WITHDRAW_HPP

#include <string>
#include <list>

using namespace std;

class withdraw {
    public:
        void askAmount(double initAmount, double totalBalance);
        void subAmount(double withdrawAmount, double totalBalance);
};

#endif