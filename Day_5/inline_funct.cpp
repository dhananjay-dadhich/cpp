#include<iostream>
using namespace std;
inline int cube(int a)
{
	return a*a*a;
}
int main()
{
	int n;
	cin>>n;
	cout<<"Cube of the value:"<<n<<" is "<<cube(n);
}
