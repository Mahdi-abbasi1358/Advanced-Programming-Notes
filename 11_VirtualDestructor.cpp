//polymorphism- slide 13
#include <cstdlib>
#include <iostream>
using namespace std;

class A {
    public: 
         ~A(){cout<<" A() destructor invoked\n";};
};
class B: public A {
    private:
        int *mem;
    public: 
        B(int n=10) {mem =new int[n];}
        ~B() {cout<<"B() destructor invoked\n"; delete [] mem;}
};
int main(){
    A *pa= new B(1000);
    delete pa;
    return 0;
}