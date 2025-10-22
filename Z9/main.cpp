#include <iostream>
#include <string>
using namespace std;

// Базовый класс
class Human {
public:
    string name;
    int age;
};

// Производный класс
class Employee : public Human {
public:
    string position;
};

int main() {
    Employee emp;

    cout << "vVEDITE NAME: ";
    cin >> emp.name;

    cout << "Vvedite age: ";
    cin >> emp.age;

    cout << "Vvedite dolznost: ";
    cin >> emp.position;

    cout << "\nSotrudnik: " << emp.name
         << ", Age: " << emp.age
         << ", Dolznost: " << emp.position << endl;

    return 0;
}
