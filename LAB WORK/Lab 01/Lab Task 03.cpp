#include <iostream>
using namespace std;


// using Rule Of Three:
	// 1) Use Destructor for DMA
	// 2) Use Copy Constructor for deep copy
	// 3) use Copy Assignment Operator 
// This allows deep copy instead of shallow one

class Box{
	
	private:
		int *num;
		
	public:
		
		Box(){
			num = new int;
		}
		Box(int value){
			num = new int(value);
		}
		
		Box(const Box & obj){
			num = new int(*obj.num);
			
		}
		
		void changeValue(int nump){
			*num = nump;
			
		}
		
		int getnum(){
			return  *num;
		}
		
		Box& operator=(const Box& obj){
			num = new int(*obj.num);
			return *this;
		}
};


int main(){
	
	cout << "Deep Copy :" << endl;
	Box b1(10);
	Box b2(b1);
	
	cout <<"Box1 value: "<<b1.getnum()<<endl;
	cout<< "Box2 value: "<<b2.getnum()<<endl;
	cout <<"Updateing Box1 value!"<<endl;
	b1.changeValue(5); // value box 2 doesnot change
	cout <<"Updated Box1 value: "<<b1.getnum()<<endl;
	cout <<"Box2 value remains unchanged: "<<b2.getnum()<<endl;
	
	cout << "Assignment Operator: " << endl;
    Box b3(20);
    b3 = b1;  // calling assignment operator
    b1.changeValue(50); // value of box3 remains the old value of box 1

    cout << "Box1 after modification: "<<b1.getnum()<<endl;
    cout << "Box2  remains: "<< b3.getnum()<<endl;
   
   // if we comment out the copy constructor and assignment operator function
   // then it would have been a shallow copy
   // due to which all boxes will be sharing the same memory
   // and changing value for 1 box will change values for all of them
   // for examples..changing value of box1 to 5 will also change value of box2 to 5
   // since we have defined the copy constructor..it is used instead of the default copy constructor causing shallow copy
   

}
