#include <iostream>
using namespace std;

int main(){
	int size;
	int usize;
	int num;
	cout <<"Enter Size of Array!"<<endl;
	cin >>size;
	
	int *arr = new int[size];
	
	for (int i=0;i<size;i++){
		arr[i]=0;
	}
	
	cout <<"Enter Number of elements to update:";
	cin >> usize;
	
	if (usize>0 && usize<=size)
{
	for (int i=0;i<usize;i++){
		
		cout <<"Enter Index Value to Update: ";
		cin>>num;
		
		cout <<"Enter the Value: ";
		cin >>arr[num-1];
	}
	
}
	else{
		cout <<"Out of bounds!"<<endl;
	}
	cout <<"Printing all ELements of The Array:"<<endl;
	
	
	for (int i=0;i<size;i++){
		cout<<"Element "<<i+1<<": "<<arr[i]<<endl;
	}
	
	delete[] arr;
}
