#include <iostream>
using namespace std; 


class base {
    public: 
        int x; 
        int y; 
        base(int x = 20, int y = 10 ){
            this->x = x; 
            this->y = y; 
        }
        int pub_sum(){
            return x+y; 
        }
    private: 
        int pri_diff(){
            return x - y; 
        }
    protected: 
        int pri_mult(){
            return x*y; 
        }
        

};


// showing the hyrarchial inheritance

// Privated members are never inherited

class A : public base{};   // no change in visiblity of base class


class B : protected base{};     // public members of base class will be protected now and rest all same


class C : private base{};       // Everything of the base class will be private in derived class
    



int main (){
    A a; 
    B b; 
    C c; 
    cout << a.x << a.y << a.pub_sum() << endl; // using only object of A we can access the accessible members of base class
    

    // cout << b.pub_sum() << endl;  // causes error because public members are protected now
    
}