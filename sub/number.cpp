#include<iostream>
using namespace std;

class number{

	int a,b,c;
	public:

	number(int x,int y){
	a=x;
	b=y;                    //parameterized constructor
	}


        int add(){
	c=a+b;
	return c;               //fuction add to add a and b
	}
	
};

int main(){           //main function
number N(2,3); //object of a  class number
cout<<N.add();  //calling function add and printing value return by it.

return 0;                


}
