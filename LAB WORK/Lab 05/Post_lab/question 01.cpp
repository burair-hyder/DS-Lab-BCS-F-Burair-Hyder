#include <iostream>
using namespace std;


int calFac(int x){
	
	if (x==1){
		return x;
	}
	
	if (x==0){
		return 1;
	}
	
	return x*calFac(x-1);
}

int main(){
	int value;
	cout <<"Enter Value For Factorial: ";
	cin >> value;
	int y=  calFac(value);
	cout <<"The Factorial For Value "<<value <<" is : "<<y<<endl;
	
}
