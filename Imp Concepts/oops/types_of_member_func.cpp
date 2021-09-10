#include <iostream>
using namespace std; 


class base {
    public: 
        // simple function 

        void simple(){
            cout << "I am simple funtion" << endl; 
        }

        // static function 
            // Can be accessed throung object or scope resolution operator
            // This works as a whole rather than for a particular object of the class
            // Ordinary members or function cannot be used inside the static function 
            // Only static members of fucntion can be accessed within static function
        static void st_func(){
            cout << "I am static function" << endl; 
        }

        // Const function 
            // If an object is const declared then it can call only const function 
            // Such function can never modify its data members
        void const_func () const{
            cout << "I am constant function " << endl; 
        }

        // Friend function 
            // It is friend of the class it can access private members of the class also
            // It can be called without objects or scope operator
        friend void friend_func(); // Can be defined later outside the class

        // Inline function 
            // Basically all the function declared in class are inlined 
            // using the inline keyword we can declare a non class function as inline 

};


// defining friend function 
void friend_func(){
    cout << "I am friend function" << endl; 
};

int main(){
    friend_func(); // Can be called directly
    base::st_func(); // Can be called using scope resolution operator
}