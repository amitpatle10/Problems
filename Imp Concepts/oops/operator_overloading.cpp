#include <iostream> 
using namespace std; 

class complex {
    private : 
        int img; 
        int real; 
    public : 
        complex (int r = 0, int i = 0){
            real = r; 
            img = i; 
        }
        friend complex operator - (complex , complex);
        void print (){
            cout << "The Absolute Diff is " << real << " i" << img << endl ; 
        }
}; 
complex operator - (complex obj1, complex obj2){
    complex res; 
    res.real = ( obj1.real - obj2.real);
    res.img = (obj1.img - obj2.img);
    return res; 
}

class typeconversion {
    private : 
        int n; 
        int d; 
    public : 
        typeconversion (int n, int d){
            this->n = n; 
            this->d = d; 
        }
        operator float(){
            return (float)n / (float)d; 
        }
        
};


int main (){
    complex c1(10,20); 
    complex c2(30, 15);
    complex c3 = c1 - c2; 
    c3.print();
    typeconversion t(1,2);
    float y = t; 
    cout << y << endl ; 

}
