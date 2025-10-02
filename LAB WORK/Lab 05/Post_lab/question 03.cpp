#include <iostream>
using namespace std;
int sumTail(int n,int total){
	if (n==0){
		return total;
	}
	total = total +n;
	sumTail(n-1,total);

}

int sumNonTail(int num){
	
	if (num==0){
		return 0;
	}
	return num +sumNonTail(num-1);
	
	
}

int main(){
	int value;
	int total =0;
	cout <<"Enter Value: ";
	cin >>value;
	
	cout <<"Sum using Tail : "<<sumTail(value,total)<<endl;
	cout <<"Sum Using Non Tail: " << sumNonTail(value)<<endl;
	
}
	
