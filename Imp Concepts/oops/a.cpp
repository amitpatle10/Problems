#include <iostream> 
using namespace std; 

class A {
    public: 
        friend int sum();   //friend is a non class member hence it cannot be defined here we need to define it outside the class
        
        static int  func();
        
};

int A::func(){
    return 100; 
}
int sum (){
    return 10; 
}
int main(){
    A obj;     
    cout << sum() << endl ;
    cout << obj.func() << endl ; 

}