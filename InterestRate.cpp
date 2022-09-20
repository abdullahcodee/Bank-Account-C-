#include "InterestRate.h"
#include <string>
#include <iostream>

using namespace std;

InterestRate::InterestRate(string name_val , double bal , double _interest_rate)
:account(name_val,bal)
{
    set_interest_rate(_interest_rate);
}

    void InterestRate::set_interest_rate(double _interest_rate){
        interest_rate = _interest_rate;
    }
    
    double InterestRate::get_interest_rate()const{
        return interest_rate;
    }
    double InterestRate::get_balance_withInterestRate()const{
        return interest_rate * balance + balance;
    }
    void InterestRate::print_user_details()const{
        
        cout << "\nAccount holder: " << name << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Current TL Balance: $" << balance << endl;
        cout <<"estimated balance + interest rate: $"<< get_balance_withInterestRate()<< endl;
    }
    
InterestRate::~InterestRate()
{
}

