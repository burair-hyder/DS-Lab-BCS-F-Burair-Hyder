#include <iostream>
using namespace std;

int * resizearr(int*arr,int oldsize,int newsize);

int main(){
	
	int *Expenses;
	int Tmonths;
	float total=0.0,avg=0.0;
	string check;
	cout <<"Enter Number of Months:";
	cin  >>Tmonths;
	
	Expenses = new int[Tmonths];
	cout <<"ENTER MONTHLY WISE EXPENSES."<<endl;
	for (int i=0;i<Tmonths;i++){
		
		cout <<"Enter Expenses for Month "<<i+1<<": ";
		cin >> Expenses[i]; 
	}
	
	cout<<"Do you want to add more Data for More months (yes/no):";
	cin >>check;
	
	if (check=="yes"){
		int add;
		
		cout <<"How many months do you want to add?";
		cin >>add;
		Expenses = resizearr(Expenses,Tmonths,Tmonths+add);
		
		for (int i=Tmonths;i<Tmonths+add;i++){
			cout <<"Enter Expenses for Month " <<i+1<<": ";
			cin >>Expenses[i];
		}
		Tmonths=Tmonths+add;
	}
	
	cout <<"PRINTING DATA FOR ALL MONTHS."<<endl;
	
	for (int i=0;i<Tmonths;i++){
		cout <<"Expense for Month "<<i+1<<": $ "<<Expenses[i]<<endl;;
		total = total + Expenses[i];
		
	}
	cout <<"Your total Expense for all months were: $"<<total<<endl;
	avg=  total/Tmonths;
	cout <<"Your avg expense Per month was : $"<<avg<<endl;
	
	
	delete []Expenses;
}

int * resizearr(int*arr,int oldsize,int newsize){
	
	if (oldsize==newsize){
		return arr;
	}
	int * temp = new int[newsize];
	if (oldsize<newsize){
		for (int i=0;i<oldsize;i++){
			temp[i] = arr[i];
			
		}
		
	}
	else{
		for (int i=0;i<newsize;i++){
			temp[i] = arr[i];
		}
	}
	delete []arr; // delete old array 
	return temp;
}
