#include <iostream>
using namespace std;

int main(){
	
	float **arr;
	int departs;
	
	cout <<"Enter Total Number of Departs: ";
	cin >>departs;
	
	int Emp[departs];
	float AvgDepart[departs];
	
	
	arr = new float*[departs];
	
	for (int i=0;i<departs;i++){
		
		cout <<"Enter Number of Employees for Depart "<<i+1<<": ";
		cin>> Emp[i];
		arr[i] = new float[Emp[i]]; 
	}
	
	cout <<"Enter Employe Salary Depart Wise."<<endl;
	
	for (int i=0;i<departs;i++){
		for (int j=0;j<Emp[i];j++){
			cout <<"Enter Salary of Emp "<<j+1<<" from Depart "<<i+1<<" :";
			cin >>arr[i][j];
		}
	}
	
	
	cout <<"Printing Data for All Emps."<<endl;
	
	for (int i=0;i<departs;i++){
//		cout <<"Depart "<<i+1<<" Data : "<<endl;
		for (int j=0;j<Emp[i];j++){
			cout <<" "<< arr[i][j]<<" ";
		}
		cout <<endl;
	}
	
	for (int i=0;i<departs;i++){
		float high=0.0;
		float total =0.0;
		int x,y;
		for(int j=0;j<Emp[i];j++){
			total = total + arr[i][j];
			if (arr[i][j]>high){
				high=arr[i][j];
				x=i;
				y=j;
			}
		}
		AvgDepart[i] = total / Emp[i];
	
		cout <<"Highest Salry for Depart  "<<i+1<<"  was: $" << high <<" at position ("<<x+1<<","<<y+1<<")"<<endl;
			total = 0;
		high=0;
	}
	float departhigh=0;
	int x;
	for (int i=0;i<departs;i++){
		if(AvgDepart[i]>departhigh){
			departhigh = AvgDepart[i];
			x=i;
		}
	}
	
	cout <<"Depart with Most Avg High Salary was Depart  No: "<<x+1<<"  with Avg Salary of $"<<departhigh;
	
	for (int i=0;i<departs;i++){
		delete[] arr[i];
	}
	delete []arr;
	
}
