#include <iostream>
using namespace std;



class Exam{
	
	private:
		string *studentname;
		int *examdate;
		float *score;
		
	public:
		Exam(){
			studentname = new string("");
			examdate = new int(0);
			score = new float(0.0);
			
		}
		
		Exam(string sname, int edate, float escore){
			studentname = new string(sname);
			examdate = new int(edate);
			score = new float(escore);
		}		
		
		~Exam(){
			// double deletion issue..two objects try to delete same pointers
			cout <<"destructing exam!"<<endl;
			delete studentname;
			delete examdate;
			delete score;
			
		}
		
		void SetStudentName(string newname){
			*studentname = newname;				
		}
		
		void SetExamDate(int newdate){
			*examdate = newdate;
			
		}
		
		void SetScore(float newscore){
			*score = newscore;
		}
		
		
		void DisplayExamDetails(){
			cout <<"Student Name: "<<*studentname<<endl;
			cout <<"Exam Date: "<<*examdate<<endl;
			cout <<"Exam Score: "<<*score<<endl;
		}
		

};

int main(){
	
	Exam e1("Burair Hyder",25,90.5);
	
	Exam e2(e1); // implemnting shallow copy only
	
	
	cout <<"Details of Exam 1: " <<endl;
	e1.DisplayExamDetails();
	cout <<endl;
	
	cout <<"Details of Exam 2: " <<endl;
	e2.DisplayExamDetails();
	cout <<endl;
	
	cout <<"Changing Details of ONLY Exam 1: "<<endl; 
	e1.SetStudentName("Ammar Hyder");
	e1.SetScore(94);
	e1.SetExamDate(10);
	cout <<endl;
	
	// we only changed the details of exam 1 only
	cout <<"Updated Details of Exam 1: " <<endl;
	e1.DisplayExamDetails();
	cout <<endl;
	
	// since it is a shalllow copy..the details of exam 2 also changed;
	// they both share the space used in pointers;
	
	cout <<"Details of Exam 2: " <<endl;
	e2.DisplayExamDetails();
	cout <<endl;
	
	
	// testing double deletion;
	

}
