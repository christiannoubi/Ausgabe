#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class C: public B{

private:
public:

    C () {

    }
    virtual void f () {
        cout << "C::f()\n";
    }
    virtual void g () {
        cout << "C::g()\n";
    }
    virtual void h () {
        cout << "C::h()\n";
    }
};