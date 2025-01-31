#include<iostream>
using namespace std;
class BankAccount
{
	int balance;
	void secureUpdate(int amount)
	{
	  balance += amount;
	  cout<<"balance updated securely";
	}
	public:
	void initialise()
	{
	   cout<<"Enter the initial balance in account:\n";
	   cin>>balance;
	
	}
	void deposit()
	{  int amount;
           cout<<"Enter the amount to deposit:\n";
           cin>>amount;
           balance += amount;
           
           cout<<"deposit completed!! not secure";	
	}
	void withdraw()
	{
	  int amount;
	  cout<<"Enter the amount to withdraw:\n";
           cin>>amount;
           balance -=amount;
	
	}
	void depositSecurely(void);
	void showBalance()
	{
	  cout<<"Your account contains: "<<balance<<"\n";
	}

};

void BankAccount :: depositSecurely(){
  	  int amount;
           cout<<"Enter the amount to deposit:\n";
           cin>>amount;
           secureUpdate(amount);
           cout<<"deposit completed!!  Securely!!!";
}

int main()
{
BankAccount obj;
obj.initialise();
obj.showBalance();
obj.deposit();
obj.showBalance();
obj.withdraw();
obj.showBalance();
obj.depositSecurely();
obj.showBalance();
return 0;
}
