#include <cstdlib>
#include <iostream>
using namespace std;
class A {
    public: 
        virtual void f()=0 ;
};
class B: public A {
    public: 
    virtual void f() {cout << "B::f invoked"<< endl;}
};
class C: public B {
    public: 
    virtual void f() {cout << "C::f invoked"<< endl;}
};
int main(){
    B b;
    C c;
    
    A *pa1= &b;
    A *pa2= &c;

    pa1->f();
    pa2->f();

}