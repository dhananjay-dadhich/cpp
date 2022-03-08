#include<iostream>
using namespace std;

class A
{
public:
A() { cout << "A's called" << endl; }
};

class B
{
public:
B() { cout << "B's called" << endl; }
};

class C: public B, public A // Note the order
{
public:
C() { cout << "C's called" << endl; }
};

int main()
{
	C c;
	return 0;
}

