// demo code for constructor

#include<iostream>
using namespace std;

class demoConst{
	private: int i=10;
	public:
		void setval(){ // function name = class name, no return.
		i=100;
		cout << "Inside the setvalue(), i== " << i << endl;
		} // end of setval()


};

int main(){
	demoConst demo1, demo2;
	demo1.setval();
	demo2.setval();
return 0;
}
