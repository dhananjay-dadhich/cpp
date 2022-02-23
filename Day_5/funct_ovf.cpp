#include<iostream>
using namespace std;

int sum(int i)
{
	return i;
} 

float sum(int i,int j) 
{
	return i+j;
}
int sum(float i,float j)
{
	return i+j;
}
float sum(float i,float j,float k)
{
	return i+j+k;
}
int sum(int i,int j,int k)
{
	return i+j+k;
}
int main()
{
	cout<<"sum is"<<sum(1)<<endl;
	cout<<"sum is"<<sum(1,2)<<endl;
	cout<<"sum is"<<sum(1.5f,2.5f)<<endl; 
	cout<<"sum is"<<sum(1.6f,2.5f,3.8f)<<endl; 
	cout<<"sum is"<<sum(1,2,3)<<endl;
	return 0;
}