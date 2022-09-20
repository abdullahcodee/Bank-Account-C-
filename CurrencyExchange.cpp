#include "CurrencyExchange.h"
#include <iostream>

using namespace std;

CurrencyExchange::CurrencyExchange(double dollarBalance)
:dollar_balance(dollarBalance)
{
    
}


void CurrencyExchange:: set_to_dollar_exchange(double d){
    dollar_balance = d*0.0633;
    
}

double CurrencyExchange:: get_exchanged_dollar() const{
    return dollar_balance;
}


CurrencyExchange::~CurrencyExchange()
{
}

//-	A destructor function is required. 