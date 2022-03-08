#include <iostream>  
using namespace std;  
     class Animal {  
       public:  
     void eat() {   
        cout<<"Animal is Eating..."<<endl;   
     }    
       };  
       class Dog: public Animal    
       {    
           public:  
         void bark(){  
        cout<<"Dog is Barking...";   
         }    
       };   
    int main(void) {  
        Dog d1;  
        d1.eat();  
        d1.bark();  
        return 0;  
    }  
