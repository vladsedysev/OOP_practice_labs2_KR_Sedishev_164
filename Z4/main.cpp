#include <iostream>
using namespace std;

// Базовый класс
class BaseClass {
public:
    BaseClass() {
        cout << "Constructer BaseClass" << endl;
    }

    ~BaseClass() {
        cout << "DEConstructer BaseClass" << endl;
    }
};

// Производный класс
class DerivedClass : public BaseClass {
public:
    DerivedClass() {
        cout << "Constructer DerivedClass" << endl;
    }

    ~DerivedClass() {
        cout << "DEConstructer DerivedClass" << endl;
    }
};

int main() {
    cout << "create BaseClass:" << endl;
    BaseClass baseObj;

    cout << "\nCreate DerivedClass:" << endl;
    DerivedClass derivedObj;

    cout << "\nExit" << endl;
    return 0;
}
