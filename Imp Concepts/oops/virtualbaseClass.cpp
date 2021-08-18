#include <iostream>
using namespace std; 

class A{ 
    public: 
        void print(){
            cout << "Hello from base class A" << endl; 
        }
}; 


class B : virtual public A { 
    public: 
        void print(){
            cout << "Hello from base class B" << endl; 
        } 
        
};


class C: virtual public A {
    public: 
        void print(){
            cout << "Hello from base class C" << endl; 
        }
}; 

class D: public  B, public C {
    public: 
        void print(){
            cout << "Hello from base class D" << endl; 
        }
}; 


int main (){
    
    


}

