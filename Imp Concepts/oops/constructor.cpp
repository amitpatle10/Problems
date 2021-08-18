#include<iostream> 
using namespace std; 

// If we do not specify a constructor c++ generates its default constructor

// default , parameterized, copy -- (deepcopy, shallow copy) in python
// deepcopy clones whole of the class that is it copies all the object 
// shallow copy basically stores the references of all the object

// There can be no virtual constructor because at the time 
// of creation of the classes there is no virtual table present

// Virtual destructor is possible


// We can have one or more constructors - constructor overloading is possible



class base {
    public:       
           base(){}; 

           // This is copy constructor ans it is invoked when a new object is made that is it takes the copy of 
           // this object of this class 
           base(const base &b){
               cout << "Copy constructor called " << endl; 
           };

           base& operator = (const base &b){
               cout << "Assigment operator called" << endl; 
               return *this; 
           }



};





int main(){
        base b1; 
        base b2 = b1;  // Copy construtor is called because a new object is made

        base b3, b4; 
        b3 = b4;  // Assigment operator called because object is already initialised 
          
       
}


// Virtual copy constructor can also be created and can be implement using some kind of pointers concept