#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class A{

private:
public:
    A () {

    }

    virtual void f () {
    cout << "A::f()\n";
    }
    void g () {
    cout << "A::g()\n";
    }

};