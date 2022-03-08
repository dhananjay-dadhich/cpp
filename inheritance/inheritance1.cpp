#include <iostream>  
using namespace std;  
     class Person {  
       public:  
     void Talk() {   
        cout<<"Person is talking..."<<endl;   
     }    
       };  
       class Student: public Person   
       {    
           public:  
         void Read(){  
        cout<<"Stident is reading..."<<endl;   
         }    
       };   
       class ITStudent: public Student   
       {    
           public:  
         void Understand() {  
        cout<<"ITStudent is  understanding...";   
         }    
       };   
    int main(void) {  
        ITStudent d1;  
        d1.Talk();  
        d1.Read();  
         d1.Understand();  
         return 0;  
    }  
