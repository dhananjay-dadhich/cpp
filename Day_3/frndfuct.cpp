// Add members of two different classes using friend functions

#include <iostream>
using namespace std;
class ClassB;

class ClassA {
    
    public:
    ClassA() : numA(1) {}
        
    private:
    int numA;
    friend int add(ClassA, ClassB);
};

class ClassB {

    public:
    ClassB() : numB(5) {}
    
    private:
    int numB;
    friend int add(ClassA, ClassB);
};
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}