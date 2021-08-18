#include<iostream> 
using namespace std; 
// virtual function are used to implement runtime polymorphism / late binding / func overriding 
// it is declared in base class and then can be redifined in the derived class

// if we declare a virtual func in a class then it becomes abstract class we can not create an object of a 
// abstract class , only pointer can be created and can be used to point towards the objects

class car {
    private: 
        int x; 
    public: 
        virtual void showtype(){
            cout << "It is a car" << endl; 
        }
}; 
class bike {

    public : 
        virtual void showtype(){
            cout << "It is a bike" << endl;
        }
        virtual void purefunc() = 0; 

};

class bmw : public car , public bike{ 
    private: 
        int y; 
    public: 
        void showtype(){
            cout << "It can be a car or it can be a bike" << endl; 
        }
        void purefunc(){
            cout << "Pure virtual func" << endl; 
        }
}; 

int main (){
    bike *b; 
   
    bmw bm; 
    b = &bm; 
    b -> purefunc();





}