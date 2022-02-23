#include<iostream>
using namespace std;
 
class A{
    private:
    int i=10;
    public:
    A(){
        cout << "Inside default Constructor"<<endl;
    }
    A(A &obj){
        cout << "Inside Copy Constructor"<<endl;
    }
    void add(A obj){
        cout << "Inside Add function"<<endl;
    }

    A add1(){
        A temp;
        cout << "Inside Add1 function"<<endl;
        return temp;
    }
};

int main(){
    A obj1,obj2;
    obj1.add(obj1);
    obj2=obj1.add1();
    return 0;
}