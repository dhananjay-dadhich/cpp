#include<iostream>
using namespace std;
int mul(int a=5,int b=6,int c=7) 
{
	return (a*b*c);
}
int main()
{
	cout<<mul()<<endl;
	cout<<mul(4,6)<<endl;
	cout<<mul(5,7,9)<<endl;
	return 0;
}