#include <cstdlib>
#include <iostream>
using namespace std;
class A {
    public: 
        A(int x_) { x= x_;}
        int getx() { return x;}
    protected:
        int x;
};
class B: public A {
    public: 
        B(int x_, int y_):A(x_){ y= y_;}
        int gety() { return y;}
    protected:
        int y;
    
};
int main(){
    A *pa,a(1);
    B *pb, b(2,3);
    pa= &a;
    pb= &b;
    cout << "in base calss pointer x ="<< pa->getx() << endl;
    cout << "in derived calss pointer x ="<< pb->getx() << endl;
    cout << "in derived calss pointer y ="<< pb->gety() << endl;
    pa=pb;
    cout << "after upcasting, in base class pointer x ="<< pa->getx() << endl;
    //cout << "after upcasting, in base calss pointer y ="<< pa->gety() << endl;
    return 0;
}