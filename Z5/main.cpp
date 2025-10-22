#include <iostream>
#include <string>
using namespace std;

// Базовый класс
class Person {
protected:
    string name;
    int age;
public:
    void inputPerson() {
        cout << "Fio: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore();
    }

    void showPerson() {
        cout << "Fio: " << name << ", age: " << age << endl;
    }
};

// Производный класс Employee
class Employee : public Person {
private:
    string position;
    int salary;
public:
    void inputEmployee() {
        inputPerson();
        cout << "Dolznost: ";
        getline(cin, position);
        cout << "Zarplata: ";
        cin >> salary;
        cin.ignore();
    }

    void showEmployee() {
        showPerson();
        cout << "Dolznost: " << position << ", Zarplata: " << salary << endl;
    }
};

// Производный класс Student
class Student : public Person {
private:
    string university;
    int year;
public:
    void inputStudent() {
        inputPerson();
        cout << "Univ: ";
        getline(cin, university);
        cout << "Kurs: ";
        cin >> year;
    }

    void showStudent() {
        showPerson();
        cout << "Univ: " << university << ", Kurs: " << year << endl;
    }
};

int main() {
    Employee emp;
    Student st;


    emp.inputEmployee();

    st.inputStudent();

    cout << "\n=== Sotrudnik ===" << endl;
    emp.showEmployee();

    cout << "\n=== Student ===" << endl;
    st.showStudent();

    return 0;
}
