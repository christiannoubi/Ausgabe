#include <iostream>
#include <string>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;

int main() {

    cout << "Ausgabe:\n";

    A a;
    cout << "01: "; a.f();
    cout << "02: "; a.g();

    B b;
    cout << "03: "; b.f();
    cout << "04: "; b.g();
    cout << "05: "; b.h();

    C c;
    cout << "06: "; c.f();
    cout << "07: "; c.g();
    cout << "08: "; c.h();
    cout << "-----------\n";

    A* z = &b;
    cout << "09: "; z->f();
    cout << "10: "; z->g();

    z = &c;
    cout << "11: "; z->f();
    cout << "12: "; z->g();
    cout << "-----------\n";

    B& y = c;
    cout << "13: "; y.f();
    cout << "14: "; y.g();
    cout << "15: "; y.h();

}