#include<iostream>
using namespace std;
class bank {
private:
int balance = 0;
public:
int deposite;
int withdraw;
void money_deposite();
void money_withdraw();
void bank_balance();
};
void bank ::money_deposite()
{
  cout<< "ENTER YOUR AMOUNT TO DEPOSITE = ";
  cin>> deposite;
  if(deposite > 0)
    balance = balance + deposite;
    else
    cout<<"Enter valid amount to deposite ";
    }
   
void bank :: money_withdraw()
{
  cout<< "ENTER THE AMOUNT TO WITHDRAW = ";
  cin>>withdraw;
  if(balance > 0)
  
    balance = balance - withdraw;
   else
     cout<< " NOT ENOUGH MONEY TO WITHDRAW ";
  }

void bank :: bank_balance()
{
  cout<<"YOUR BANK BALANCE = " << balance;
 }


int main()
{
int c = 0;
  bank b1;
  while(c != 4)
  {
    cout<<"\nENTER YOUR CHOICE"<<endl<<"1.DEPOSITE\n"<<"2.WITHDRAW\n"<<"3.BANK BALANCE\n"<<"4.EXIT\n";
    cin>>c;
    switch(c)
    {
      case 1:
      b1. money_deposite();
      break;
      case 2:
      b1.money_withdraw();
      break;
      case 3:
      b1.bank_balance();;;;;;
      break;
      case 4:
      break; 
  	}
    }
  }
