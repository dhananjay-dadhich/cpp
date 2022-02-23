#include<iostream>
using namespace std;

void swapupoi(int *A,int *B)
{
	int temp;
	temp=*A;
	*A=*B;
	*B=temp;
	
}
int main()
{
	int a=10;
	int b=12;
	swapupoi(&a,&b);
	cout<<"value after swap"<<a<<b;
}