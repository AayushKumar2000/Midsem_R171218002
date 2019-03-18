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
