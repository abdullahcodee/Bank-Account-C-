#ifndef CURRENCYEXCHANGE_H
#define CURRENCYEXCHANGE_H

class CurrencyExchange
{
    
private:

    double dollar_balance;
    
public:
    CurrencyExchange(double dollarBalance = 0);
    void set_to_dollar_exchange(double d);
    double get_exchanged_dollar() const;    

    ~CurrencyExchange();
//-	A destructor function is required. 
};

#endif // CURRENCYEXCHANGE_H
