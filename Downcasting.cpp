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
    A a(1);
    B b(2,3);
    cout << "in base calss object x ="<< a.getx() << endl;
    cout << "in derived calss object x ="<< b.getx() << endl;
    cout << "in derived calss object y ="<< b.gety() << endl;
    b=a;
    cout << "after downcasting in derived class object x ="<< b.getx() << endl;
    cout << "after downcasting in derived calss object y ="<< b.gety() << endl;
    return 0;
}