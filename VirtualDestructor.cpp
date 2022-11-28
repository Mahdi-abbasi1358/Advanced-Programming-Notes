#include <cstdlib>
#include <iostream>
using namespace std;
class A {
    public: 
        virtual ~A(){cout<<"~ A() destructor invoked " << endl;};
};
class B: public A {
    private:
        int *mem;
    public: 
        B(int n=10) {mem =new int[n];}
        ~B() {cout<<"~ B() destructor invoked " << endl; delete [] mem; }
};
int main(){
    A *pa= new B(1000);
    delete pa;
    return 0;
}