// polymorphism-slide 2
#include <cstdlib>
#include <iostream>
using namespace std;

class A {
    private: 
        int x;  //visible on;y within A
    protected: 
        int y;  //visible to derived subclasses
    public: 
        A(int x_, int y_){x=x_; y=y_; }
        void f() {
            cout <<"Example method from the base class A"<< endl;
            cout << "x+y="<< x+y << endl;
            };
};
class B: public A { // B is a subclass derived from A
    private:
        int w;  // visible only within B
    public: 
        B(int x_, int y_, int w_ ): A(x_, y_) {w=w_;}
        void g() {    
            cout <<"Example method from the derived class B"<< endl;
            cout << "w=" << w << endl;
            };
};

int main(){
    A a(1,2);
    B b(3,4,5);
    a.f();      
    b.f();  // invoking a method from the base class
    b.g();
    return 0;
}