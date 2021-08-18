// Private    Public    Protected    Friend 


#include <iostream> 
using namespace std; 

class A { 
    
    public: 
        int x; 
        A (){
            x = 10; 
            y = 20; 
            z = 30; 
        }
        friend int sum();   // declaring the friend function in public is required to globally access it 
    private: 
        int y; 
    protected: 
        int z; 
    
}; 

// Declaring a derived class which can access the public and protected member of the base class

class B: public A{
    public: 
        void print_private(){
            cout << x << endl; // public variable can be accessed 
            // cout << y << endl; // produces the error because private can not be accessed
            cout << z << endl;  // derived class can access the protected member 
        }
}; 

// Defining the friend function which is now global and we can just call it using its name no global access specifier 
// or an object is required for accessing it 

int sum(){
    return 100; 
}

//

int main (){
    B obj; 
    obj.print_private();
    cout << sum() << endl;  // calling the friend function 
}