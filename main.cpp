#include <iostream>
#include "InterestRate.h"
#include "account.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <CurrencyExchange.h>
#include <fstream>


using namespace std;
int main()
{    
    ofstream MyFile("dataFile.txt");
    srand(time(NULL));
    cout<<"WELCOME TO BEYKOZ BANK. "<< endl;
    cout<<"-------------------------------------------------"<< endl;
    cout<<"PLEASE FILL THE BELOW DATA TO CREATE ACCOUNT. "<< endl;
    cout<<"-------------------------------------------------"<< endl;
    

    string name;    
    double acc_balance;
    
    
    cout<<"Please enter account name: "<<endl;
    cin>>name;
    
    cout<< "Please enter amount as a deposit in your TL account"<<endl;
    cin>>acc_balance;
    
    
    account ACC1; 
    ACC1.setAccount(name,acc_balance);
    ACC1.Generate_ACC_NUM();
    ACC1.print();
    cout<<"congratulations your account is created.\n\n"<<endl;
    
    MyFile<<"congratulations " <<name<<" your account has been created.\n\n"<<endl;
    MyFile<<"and Your balance is : "<<acc_balance<<endl;

    int looper = 0;
    
    while (looper != -1)
    {
        int choise; 
        
        cout<<"please select the number of required transaction."<<endl;
        cout<<"to print your account information press (1)."<<endl;
        cout<<"to make a deposit press (2)."<<endl;
        cout<<"to make a set_withdraw press (3)."<<endl;
        cout<<"to check your balance press (4)."<<endl;
        cout<<"to check your current transactions (5)."<<endl;
        cout<<"check the exchange rate from TL to dollar (6)."<<endl;
        cout<<"activate online payments (7)."<<endl;
        cout<<"create a dollar account (8)."<<endl;
        cout<<"Add money to another account (9)."<<endl;
        cout<<"Withdraw money from the main account (10)."<<endl;
        cout<<"compare the balace in 2 accounts (11)."<<endl;
        cout<<"check your balance + the interest rate (12)."<<endl;
        cout<<"Read my history transactions(13)."<<endl;

        



        cin>>choise;
        
        switch(choise)
        {
        
        case 1:
        if (choise == 1)
            {
                ACC1.print();
            }
            
        case 2:
        if (choise == 2)
            {
                double amount = 0;
                cout<<"please enter amount to deposit in your account: "; 
                ACC1.set_deposit(amount);
                MyFile<<"you deposited "<<amount<<endl;
            }
        case 3 : 
        if (choise == 3)
            {
                double amount = 0;
                cout<<"please enter amount to set_withdraw in your account: "; 
                ACC1.set_withdraw(amount);
                MyFile<<"you Withdraw "<<amount<<endl;

            }
            
        case 4 : 
        if (choise == 4)
            {
                cout<<"your balance is "<< ACC1.getBalance()<<endl;
                MyFile<<"your balance is "<<ACC1.getBalance()<<endl;
            }
        case 5: 
        if (choise == 5)
            {
                ACC1.check_transactions();
                MyFile<<"the number of transactions is "<<ACC1.getNumOfTransacations()<<endl;
            }
        
            
        case 6:
        if (choise == 6)
            {
                CurrencyExchange temp;
                double amount = 0;
                cout<<"please enter the TL amount to exchanged to Dollar: "; 
                cin>>amount;
                temp.set_to_dollar_exchange(amount);
                cout<<temp.get_exchanged_dollar()<<" Dollars"<<endl;
                MyFile<<"the amount of exchanged Dollars from TL is: "<<temp.get_exchanged_dollar()<<endl;
            }
        case 7:
        if (choise == 7)
        {
            cout<<"you have to add 1000 TL and keep them in your account"<<endl;
            char confirm;
            cout<<"please confirm: ";
            cin>>confirm;
            if(confirm == 'Y' || confirm == 'y')
            {
                add_creditCard_account(ACC1);
                cout<<"congratulations"<<endl<<endl;
                cout<<"now you can enjoy using the online purchases please keep 1000 TL in your account to enjoy this servoce."<<endl<<endl;
                ACC1.print();
                MyFile<<"congratulations..."<<"now you can enjoy using the online purchases please keep 1000 TL in your account to enjoy this servoce."<<endl<<"your balance is"<<ACC1.getBalance()<<endl;
            }
            else {
                continue;
            }
            
        }
        case 8:
        if (choise == 8)
            {
                double dollars = 0;
                
                cout<<"please enter the Dollar amount to deposit in your account: "; 
                cin>>dollars;
                CurrencyExchange obj(dollars);

                account ACC1(name,acc_balance,obj);
                ACC1.print_exchangedToDollar();
                MyFile<<"the Dollar amount is  "<<dollars<<" Dollars deposit in your account: "<<endl;
                
            }
        
        case 9:
        if (choise == 9)
            {
                string name;    
                double acc_balance;
    
                cout<<"Please enter the New account name: "<<endl;
                cin>>name;
    
                cout<< "Please enter amount as a deposit in your TL account"<<endl;
                cin>>acc_balance;

                account ACC2; 
                ACC2.setAccount(name,acc_balance);
                ACC2.Generate_ACC_NUM();
                ACC2.print();
                cout<<"congratulations your account is created.\n\n"<<endl;
                
                cout<<"the whole balance in your 2 accounts is"<<endl;
                account ACC3;
                ACC3 = ACC1+ACC2;
                cout<<"the total balance is "<<ACC3.getBalance()<<endl;
                MyFile<<"the total balance of overloaded ++ of the 2 created accounts is "<<ACC3.getBalance()<<endl;
           }
           
        case 10:
        if (choise == 10)
            {
                string name;    
                double acc_balance;
    
                cout<<"Please create the new account name: "<<endl;
                cin>>name;
    
                cout<< "Please enter amount to withdraw from the main account"<<endl;
                cin>>acc_balance;

                account ACC2; 
                ACC2.setAccount(name,acc_balance);
                ACC2.Generate_ACC_NUM();
                cout<<"the whole balance in your 2 accounts is"<<endl<<endl;
                account ACC3;
                ACC3 = ACC1-ACC2;
                cout<<"the total balance is: "<<ACC3.getBalance()<<endl;
                MyFile<<"the amount that withdrawn from the main account : "<<ACC3.getBalance()<<endl;

           }
        case 11:
        if (choise == 11)
            {
                string name;    
                double acc_balance;
                
                cout<<"Please create new account to compare: "<<endl;
                cout<<"Please enter the new account name: "<<endl;
                cin>>name;
    
                cout<< "Please enter a deposit in the new account "<<endl;
                cin>>acc_balance;

                account ACC2; 
                ACC2.setAccount(name,acc_balance);
                ACC2.Generate_ACC_NUM();
                cout<<(ACC1==ACC2);
                MyFile<<"check if the two accounts are equal"<<(ACC1==ACC2)<<endl;
           }
           case 12:
           if(choise == 12)
           {
               double acc_balance;
               double interest_rate;
               string name;    

                cout<< "Please enter the amount to be checked "<<endl;
                cin>>acc_balance;
                
                cout<< "Please enter the interest rate you want to calculate "<<endl;
                cin>>interest_rate;
                InterestRate ACC1(name,acc_balance,interest_rate);
                ACC1.print_user_details();
                MyFile<<"the total estimated balance + the Interest rate is  "<<ACC1.get_interest_rate() * acc_balance + acc_balance <<"$"<<endl;
                
               
           }
           
           case 13:
            if (choise == 13)
            {
                string myText;
                ifstream MyReadFile1("dataFile.txt");
	
                if (MyReadFile1.is_open())
                {
                    while (getline(MyReadFile1, myText))
                {
                    cout<<myText<<endl;
                }
	
                    MyReadFile1.close();	
                }
            else
                {
                    cout<<"Unable to open file!";
                }
            }

        cout<<" TO EXIT PRESS -1 TO CONTINUE PRESS ANY OTHER NUMBER "<<endl;
        cin>>looper; 
    }

    cout<<"thanks for using our bank account application."<<endl; 
}}