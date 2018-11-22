#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class B : public A{

private:
public:

    B () {

    }
    virtual void f () {
        cout << "B::f()\n";
    }
    virtual void g () {
        cout << "B::g()\n";
    }
     void h () {
        cout << "B::h()\n";
    }
};