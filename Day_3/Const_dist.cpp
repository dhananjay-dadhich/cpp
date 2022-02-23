// Constructor and Destructor Program
#include<iostream>
using namespace std;

class Distance{
public:
int feet;
int inch;

Distance()
	{
	feet=0;
	inch=0;
	cout << "Constructor called!"<<endl;
	}

Distance(int x,int y)
	{
	feet=x;
	inch=y;
	cout << "Parameterized Constructor called!"<<endl;
	}

Distance(Distance &obj)
	{
	feet=obj.feet;
	inch=obj.inch;
	cout << "Copy Constructor called!"<<endl;
	}

~Distance()
	{
	cout << "Destructor called!"<<endl;
	}
};

int main()
{
Distance d1;
Distance d2(4,5);
Distance d3(d2);
cout << d1.feet << " feet and " << d1.inch << " inches."<<endl;
cout << d2.feet << " feet and " << d2.inch << " inches."<<endl;
cout << d3.feet << " feet and " << d3.inch << " inches."<<endl;

return 0;
}