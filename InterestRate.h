#ifndef INTERESTRATE_H
#define INTERESTRATE_H

#include "account.h"
#include <string>

class InterestRate:public account
{
public:
    InterestRate(string name_val = "", double bal = 0, double _interest_rate = 0.14);
    void set_interest_rate(double _interest_rate);
    double get_interest_rate()const;
    double get_balance_withInterestRate()const;
    void print_user_details()const;
    
    ~InterestRate();
private:
    double interest_rate;

};

#endif // INTERESTRATE_H
