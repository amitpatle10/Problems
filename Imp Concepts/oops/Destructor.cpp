#include <iostream> 
using namespace std; 


class base{
    public: 
        base(){
            cout << "Class base created" << endl; 
        }
    private:

        // Private destructor can be created 
        // when the destructor is private we cannot create a normal object we have to create a pointer 
        // means when the destructor is private basically the object should be in dyanmic memory then it wont 
        // be deleted voluntarily

        ~base(){
            cout << "Object Deleted" << endl; 
        }
};





// virtual destructor

class virtual_des{
    public: 
        virtual_des(){
            cout << "base vd called" << endl; 
        }
        virtual ~virtual_des(){
            cout << "base vd deleted" << endl; 
        }
};

class derived_virtual_des : public virtual_des {
    public: 
        derived_virtual_des(){
            cout << "derived class called" << endl; 
        }
        ~derived_virtual_des(){
            cout << "derived class deleted" << endl;
        }
};


// pure virtual destructor

class pure_virtual_destructor{
    public:    
        virtual ~pure_virtual_destructor() = 0; // now it is abstract class 

};

// if we donot provide the function body to the pure virtual destructor of the class then error will 
// occur.
pure_virtual_destructor::~pure_virtual_destructor(){
    cout << "pure virtual destructor base class called" << endl; 
}

class derived_pvd: public pure_virtual_destructor {
    public: 
        derived_pvd(){
            cout << "derived is called" << endl; 
        }
};

int main(){

    
    //....can destructor be private ......//
        //base *b; 
        // here we cannot delete the pointer if the destructor is private



    //.....can destructor be virtual if yes what are the advantages.....//
        // virtual destructor also deletes the derived class pointer if the base class pointer is deleted
    // derived_virtual_des *d = new derived_virtual_des(); 
    // virtual_des *v = d; 
    // delete v; 


    //pure virtual destructor
        
    pure_virtual_destructor *pvd = new derived_pvd(); // created base class pointer points to the derived class 
    delete pvd; // pure virtual destructor will be called
   





}
