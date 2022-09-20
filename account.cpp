#include "account.h"
#include "CurrencyExchange.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int account::transactions = 1;
//-	Use static variables and functions
int account::getNumOfTransacations(){
    return transactions;
}
//-	Overload a member function so that it can be called with different types of parameter(s). 
account::account(string name_val, double bal, const CurrencyExchange toDollar )
: name(name_val),balance(bal),to_dollar(toDollar)
{
    }
 
//-	Use friend function
void add_creditCard_account(account &source)
{
    source.balance = source.balance +1000;
    
}

void account::print() const

{

	cout << "\nAccount holder: " << name << endl;

	cout << "Account number: " << accountNumber << endl;

	cout << "Current TL Balance: $" << balance << endl;
    
    
}

void account::print_exchangedToDollar()const{
    cout << "Current TL Balance: " << balance <<endl<<"the dollar amount is: $ "<<to_dollar.get_exchanged_dollar()<<endl;
}



void account::setAccount(string accName, double bal)

{
    while(accName.size() <3)
    {
        cout<<"please enter valid account Name more than 2 characters."<<endl;
        cin>> accName;
    }
    name = accName;
	balance = bal;
}

void account::Generate_ACC_NUM (){
    int n;
    srand(time(NULL));
    n = rand();
    accountNumber = n ;
}

int account::GetGenerate_ACC_NUM () const{
    return accountNumber;
}


string account::getName() const

{

	return name;

}

double account::getBalance() const

{

	return balance;

}

//use function template for function overloading

void account::set_deposit(double money)

{

	cin >> money;

	transactions++;

	balance = balance + money;

	cout << "Your New balance: $" << balance << endl;

}

//use function template for function overloading

void account::set_deposit(int money)

{

	cin >> money;

	transactions++;

	balance = balance + money;

	cout << "Your New balance: $" << balance << endl;

}

void account::set_withdraw(double money)

{

	cin >> money;

    if(balance - money >= 0)

    {

        balance = balance - money;

        cout << "New balance: $" << balance << endl;

    }

    else 

        cout<<"sorry you don't have enough balance. "<<endl;

        

	transactions++;

}

void account::set_withdraw(int money)

{

	cin >> money;

    if(balance - money >= 0)

    {

        balance = balance - money;

        cout << "New balance: $" << balance << endl;

    }

    else 

        cout<<"sorry you don't have enough balance. "<<endl;

        

	transactions++;

}

void account::check_transactions() const

{

	cout << transactions << " transactions have been made." << endl;

	cout << "Current balance: $" << balance;

}
//-	Define at least 3 operator overloading functions
account account ::operator + (const account &add)const{
        account temp;
        temp.balance = balance + add.balance; 
        return temp;
    }

account account ::operator - (const account &withdraw)const{
        account temp;
        temp.balance = balance - withdraw.balance; 
        return temp;
}

bool account ::operator == (const account &compare)const{
    account temp;
    if (balance == compare.balance){
        cout<<"the 2 accounts has the same balance"<<endl;
        //return true;
    }
    else {
        cout<<"the 2 accounts don't have the same balance"<<endl;
        return false;
    }
    
}


account::~account()
{
}
//	A destructor function is required. 