#include <iostream>
#include <string>
using namespace std;


class Animal {
public:
    void sound() {
    }
};


class Dog : public Animal {
public:
    void sound() {
        cout << "Gav" << endl;
    }
};


class Cat : public Animal {
public:
    void sound() {
        cout << "May" << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    string animal;
    cout << "Vvedite zivotnoe (sobaka, kot): ";
    cin >> animal;

    if (animal == "sobaka") {
        d.sound();
    }
    else if (animal == "kot") {
        c.sound();
    }
    else {
        cout << "Net takix" << endl;
    }

    return 0;
}
