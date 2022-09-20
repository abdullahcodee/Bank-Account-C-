#ifndef ACCOUNT_H
#define ACCOUNT_H
//-	Do not forget to put include guard to your header file
#include "CurrencyExchange.h"

#include <string>

using namespace std;

class account
{
public:
    //account();
    
    //-	Use friend function
    friend void add_creditCard_account(account &source);
    
    void print() const;
    
    void print_exchangedToDollar()const;

	void setAccount(string accName, double bal);
    
    int get_Acc_Num();

	string getName() const;

	void Generate_ACC_NUM ();
    
    int GetGenerate_ACC_NUM() const;


	double getBalance() const;
//use function template for function overloading
	void set_deposit(double money);
    
    void set_deposit(int money);
//use function template for function overloading
	void set_withdraw(double money);
    
    void set_withdraw(int money);

	void check_transactions() const;
        
    static int getNumOfTransacations();
    //-	Overload a member function so that it can be called with different types of parameter(s) & defult paramter values assigned. 
    account(string name_val = "", double bal = 0 , const CurrencyExchange toDollar = 0 );
    //-	Define at least 3 operator overloading functions
    account operator + (const account &add)const;
    account operator - (const account &withdraw)const;
    bool operator == (const account &compare)const;

    
    
    ~account();
   // -	A destructor function is required. 
protected:

    string name;

    int accountNumber;

	double balance;
    
    CurrencyExchange to_dollar;
        //-	Use static variables and functions
	static int transactions;

};

#endif // ACCOUNT_H
