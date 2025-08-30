#include <iostream>
using namespace std;

int ** addmatrix(int **matrix1,int r1,int c1, int** matrix2,int r2,int c2);

int ** submatrix(int **matrix1,int r1,int c1, int** matrix2,int r2,int c2);

int main(){
	
	int **arr1;
	
	int row1,row2,column1,column2;
	int **arr2;
	
	int **result;
	
	cout <<"Enter Rows and Columns for Matrix 1: ";
	cin >>row1;
	cin >>column1;
	
	cout <<"Enter Rows and Columns for Matrix 2: ";
	cin >>row2;
	cin >>column2;
	
	arr1 = new int*[row1];
	arr2 = new int*[row2];
	
	for (int  i=0;i<row1;i++){
		arr1[i] = new int[column1];
	}
	
	for (int  i=0;i<row2;i++){
		arr2[i] = new int[column2];
	}
	
	cout <<"Enter Data for Matrix 1."<<endl;
	
	for (int i=0;i<row1;i++){
		for(int j=0;j<column1;j++){
			cout <<"Enter Data for Position: ("<<i+1<<","<<j+1<<"): ";
			cin >>arr1[i][j]; 
		}
	}

	cout <<"Enter Data for Matrix 2."<<endl;
	
	
	for (int i=0;i<row2;i++){
		for(int j=0;j<column2;j++){
			cout <<"Enter Data for Position: ("<<i+1<<","<<j+1<<"): ";
			cin >>arr2[i][j]; 
		}
	}
	
	cout <<"2 Matrix are Made.Printing both."<<endl;
	cout <<"Matrix 1"<<endl;
	cout <<endl;
	for (int i=0;i<row1;i++){
		for (int j=0;j<column1;j++){
			cout<<" " <<arr1[i][j]<<" ";
		}
		cout <<endl;
	}
	cout <<endl;
	cout <<"Matrix 2"<<endl;
	cout <<endl;
	for (int i=0;i<row2;i++){
		for (int j=0;j<column2;j++){
			cout<<" " <<arr2[i][j]<<" ";
		}
		cout <<endl;
	}
	
	result  =addmatrix(arr1,row1,column1,arr2,row2,column2);
	if (result){
		for (int i=0;i<row1;i++){
			delete [] result[i];
		}
		delete [] result;
	}
	result =submatrix(arr1,row1,column1,arr2,row2,column2);
		if (result){
		for (int i=0;i<row1;i++){
			delete [] result[i];
		}
		delete [] result;
	}
	
	for (int i=0;i<row1;i++){
		delete [] arr1[i];
	}
	delete []arr1;
	
	for (int i=0;i<row2;i++){
		delete [] arr2[i];
	}
	delete []arr2;
	
	
	
}


int ** addmatrix(int **matrix1,int r1,int c1, int** matrix2,int r2,int c2){
	
	if (r1==r2 && c1==c2){
		
		int ** result = new int*[r1];
		for (int i=0;i<r1;i++){
			result[i] = new int[c1];
		}
		
		cout <<"Adding Both Matrix."<<endl;
		
		for (int i=0;i<r1;i++){
			for (int j=0;j<c1;j++){
				result[i][j]= matrix1[i][j] + matrix2[i][j];
			}
		}
			cout <<"Printing Resultant Martix."<<endl;
		
		for (int i=0;i<r1;i++){
			for (int j=0;j<c1;j++){
				cout <<" "<< result[i][j]<<" ";
			}
			cout <<endl;
		}
		
		return result;
	}
	else {
		cout <<"Both Matrix does not have same dimensions!"<<endl;
		cout <<"Cant not Do addititon!";
		return nullptr;
	}
	
	
	
	
	
}


int ** submatrix(int **matrix1,int r1,int c1, int** matrix2,int r2,int c2){
	
	if (r1==r2 && c1==c2){
		
		int ** result = new int*[r1];
		for (int i=0;i<r1;i++){
			result[i] = new int[c1];
		}
		
		cout <<"Subtracting Both Matrix."<<endl;
		
		for (int i=0;i<r1;i++){
			for (int j=0;j<c1;j++){
				result[i][j]= matrix1[i][j] - matrix2[i][j];
			}
		}
		
		cout <<"Printing Resultant Martix."<<endl;
		
		for (int i=0;i<r1;i++){
			for (int j=0;j<c1;j++){
				cout <<" "<< result[i][j]<<" ";
			}
			cout <<endl;
		}
		
		return result;
	}
	else {
		cout <<"Both Matrix does not have same dimensions!"<<endl;
		cout <<"Cant not Do Subtraction!";
		return nullptr;
		
	}
}
