#include <cstdlib>
#include <iostream>
using namespace std;
class A {
    public: 
    void f(int x) {
        cout <<"A::f("<< x << ")\n";}
};
class B: public A {
    public: 
    void f(int x) {
        A::f(x);    //call the base class
        cout <<"B::f("<< x << ")\n";
        }
};
int main(){
    A a;
    B b;
    a.f(1);
    b.f(2);
    return 0;
}