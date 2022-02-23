#include<iostream>
using namespace std;
int& max(int &,int &);
int main()
{
int a=5,b=3;
int ans= max(a,b);
cout<<"Max number is:"<<ans;
return 0;
}

int& max(int &x,int &y)
{
	if(x>y)
	return x;
	else
	return y;
}
