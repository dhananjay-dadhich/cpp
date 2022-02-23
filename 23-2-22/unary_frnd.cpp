#include<iostream>
using namespace std;
class UnaryFrnd
{
     int a=1;
     int b=2;
     int c=3;
     public:
         void getvalues()
         {
              cout<<"Values of a, b, c\n";
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void show()
         {
              cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
         }
         void friend operator-(UnaryFrnd &x);
};
void operator-(UnaryFrnd &x)
{
     x.a = -x.a;
     x.b = -x.b;
     x.c = -x.c;
}
int main()
{
     UnaryFrnd x1;
     x1.getvalues();
     cout<<"Before Overloading\n";
     x1.show();
     cout<<"After Overloading \n";
     -x1;
      x1.show();
      return 0;
}