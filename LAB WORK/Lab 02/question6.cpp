#include <iostream>
using namespace std;

class Safe_Pointer {
	
	private:
		
    	int* ptr;
    
	public:
		
	    Safe_Pointer() {
	    	
	        ptr = new int;
	    }
    
    
	    void setValue(int value){
	    	
	        *ptr = value;
	    }
	    
	    
	    int getValue(){
	    	
	        return *ptr;
	    }
	    
	    
	    void release(){
	    	
	        delete ptr;
	        ptr = nullptr;
	    }
	    
	    ~Safe_Pointer(){
	    	
	        if (ptr != nullptr){
	        	
	            delete ptr;
	        }
	    }
	    
	    
};

int main() {
	
    int numStd = 5;
    
    
    Safe_Pointer* Marks = new Safe_Pointer[numStd];
    
    

    for (int i=0; i<numStd; i++){
    	
        int marks;
        
        cout << "Enter marks for Student "<<i + 1<<": ";
        
        cin >> marks;
        
        Marks[i].setValue(marks);
        
    }

    cout << "Recorded Marks:"<<endl;
    

    for (int i=0;i<numStd;i++){
    	
        cout <<"Student "<<i + 1<< ": "<<Marks[i].getValue()<<endl;
    }

    for (int i = 0; i < numStd; i++){
    	
        Marks[i].release();
        
    }
    
    
    delete[] Marks;

    
}
