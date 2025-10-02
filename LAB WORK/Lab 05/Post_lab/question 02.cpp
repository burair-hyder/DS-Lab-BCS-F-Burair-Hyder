#include <iostream>
using namespace std;
// part 1
void printNumbers(int n){
	
	if (n==0){
		return;
	}
	cout<<n<<endl;
	printNumbers(n-1);
	
	
}
// part 2
void FuncB(int n);
void FuncA(int n){
	if (n==0){
		return;
	}
	cout <<n<<endl;
	FuncB(n-1);
}

void FuncB(int n){

	if (n==0){
		return;
	}
	
	cout <<n<<endl;
	FuncA(n-1);

	
}

int main(){
	int num;
	cout<<"Enter A Number: ";
	cin >> num;
	cout <<"Printing Numbers from N to 1 Using  Direct Recursion."<<endl;
	printNumbers(num);
	
	cout <<"Printing Numbers from N to 1 Using  InDirect Recursion."<<endl;
	FuncA(num);
	
	
	
}
