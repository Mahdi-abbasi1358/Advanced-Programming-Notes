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
    A *pa, a(1);
    B *pb, b(2,3);
    pa=&a;
    pb=&b;
    cout << "in base calss pointer x ="<< a.getx() << endl;
    cout << "in derived calss pointer x ="<< b.getx() << endl;
    cout << "in derived calss pointer y ="<< b.gety() << endl;
    pb=pa;
    cout << "after downcasting in derived class pointer x ="<< b.getx() << endl;
    cout << "after downcasting in derived calss pointer y ="<< b.gety() << endl;
    return 0;
}