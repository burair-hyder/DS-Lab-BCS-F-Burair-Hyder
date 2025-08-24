#include <iostream>
using namespace std;


class BankAccount{
	
	private:
		
		double balance;
		
	public:
	
	BankAccount(){
		balance =0.0;
	}	
	
	BankAccount(double initialbalance){
		balance = initialbalance;
	}
	
	BankAccount(const BankAccount & obj){
		balance = obj.balance;
	}
	
	
	void Deduction(double value){
		
		if (value<=balance){
		balance = balance- value;
		}
		else{
			cout <<"You are low on Funds!"<<endl;
			
		}
	}	
	
	double getbalance(){
		return balance;
	}
		
};
int main(){
	BankAccount account1;
	
	cout <<"Current Balance of Account 1: $"<<account1.getbalance()<<endl;
	
	BankAccount account2(1000.0);
	
	cout <<"Current Balance of Account 2: $"<<account2.getbalance()<<endl;
	
	BankAccount account3(account2);
		cout <<"Current Balance of Account 3: $"<<account3.getbalance()<<endl;
	account3.Deduction(200.0);
	
	cout <<"Updated Balance of Account 3: $"<<account3.getbalance()<<endl;
	cout <<"Current Balance of Account 2: $"<<account2.getbalance()<<endl;
	
	return 0;	
}
