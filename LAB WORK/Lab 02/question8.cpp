#include <iostream>
using namespace std;

int main(){
	
	int m;
	
	float **Data;
	int *Readings;
	float *AvgDays;
	cout <<"Enter Number of Days: ";
	cin >>m;
	Readings= new int[m];
	Data = new float*[m];
	AvgDays = new float[m];
	for (int i=0;i<m;i++){
		
		cout <<"Enter Number of Readings for Day"<<i+1<<": ";
		cin >>Readings[i];
		Data[i] = new float[Readings[i]];

	}
	
	for (int i=0;i<m;i++){
		for (int j=0;j<Readings[i];j++){
			cout <<"Enter Temp For Day "<<i+1 <<" Reading "<<j+1<<": ";
			cin >>Data[i][j];
		}
	}
	
	
	cout <<"Printing Data for All Days."<<endl;
	float total=0.0;
	for (int i=0;i<m;i++){
		for (int j=0;j<Readings[i];j++){
			total = total + Data[i][j];
			cout <<" "<<Data[i][j]<<" ";
		}
		AvgDays[i] = total/Readings[i];
		total =0.0;
		cout <<endl;
	}
	
	float high=0;
	int hindex;
	int lindex;
	float low=999;
	for (int i=0;i<m;i++){
		
		if (AvgDays[i]>high){
			high = AvgDays[i];
			hindex= i;
			
		}
		
		if (AvgDays[i]<low){
			low = AvgDays[i];
			lindex = i;
		}
	}
	
	cout <<"Hotest Day was Day "<<hindex+1<< " with avg temp of : "<<high<<"C"<<endl;
	cout <<"Coldest Day was Day "<<lindex+1<< " with avg temp of : "<<low<<"C"<<endl;
	
	
	
	for (int i = 0; i < m; i++) {
    	delete[] Data[i];
	}
	
	
	delete[] Data;     
	delete[] Readings; 
	delete[] AvgDays;  

	
}
