#include <iostream>
using namespace std;

int main(){
	
	int **arr;
	int nonzero=0;
	int rows;
	int columns;
	
	cout <<"Enter number of rows: ";
	cin >> rows;
	
	cout <<"Enter number of columns: ";
	cin >> columns;
	
	arr=  new int*[rows];
	
	for (int i=0;i<rows;i++){
		arr[i] = new int [columns];
	}
	
	cout <<"Enter Values for the Matrix."<<endl;
	for (int i=0;i<rows;i++){
		for (int j=0;j<columns;j++){
			cout <<"Enter Value for ("<<i<<","<<j<<"): ";
			cin>>arr[i][j];
			if (arr[i][j]!=0){
				nonzero++;
			}
		}
	}
	
	int **Compressed= new int*[nonzero];
	for(int i=0;i<nonzero;i++){
		Compressed[i] = new int[3];
	}
	
	
	cout <<"Normal Matrix:"<<endl;
	

	for (int i=0;i<rows;i++){
		for (int j=0;j<columns;j++){
			cout <<" "<<arr[i][j]<<" ";
		}
		cout <<endl;
	}
	
	int count=0;
	cout <<"Compressed Form: "<<endl;
	
	for (int i=0;i<rows;i++){
		for (int j=0;j<columns;j++){
			
			if (arr[i][j]!=0){
				Compressed[count][0] = i;
				Compressed[count][1] = j;
				Compressed[count][2] = arr[i][j];
				count++;
			}
		}
	}
	
	for (int i=0;i<nonzero;i++){
		for (int j=0;j<3;j++){
			cout <<" "<< Compressed[i][j]<<" ";
		}
		cout <<endl;
	}
	
	for (int i=0;i<rows;i++){
		delete [] arr[i];
	}
	delete []arr;
	
	for (int i=0;i<nonzero;i++){
		delete []Compressed[i];
	}
	delete []Compressed;
	
}
