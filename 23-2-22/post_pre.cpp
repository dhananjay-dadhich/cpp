#include<iostream>
using namespace std;

class demo{
int m;
public:
demo(){ m = 0;}
demo(int x){
m = x;
}
void operator ++()
{
++m;
cout << "Pre increment=" <<m;
}
void operator ++(int)
{
m++;
cout << "Post increment=" <<m;
}
};
int main()
{
demo d1(5);
++d1;
d1++;
}
