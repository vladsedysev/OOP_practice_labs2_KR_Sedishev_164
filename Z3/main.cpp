#include <iostream>
#include <string>
using namespace std;


class Vehicle {
protected:
    string brand;
    int speed;

public:
    void setInfo(string b, int s) {
        brand = b;
        speed = s;
    }

    void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};


class Car : public Vehicle {
private:
    int doors;

public:
    void setCarInfo(string b, int s, int d) {
        setInfo(b, s);
        doors = d;
    }

    void showCarInfo() {
        cout << "\n=== Avto ===" << endl;
        showInfo();
        cout << "Dveri: " << doors << endl;
    }
};


class Bicycle : public Vehicle {
private:
    int Numb;

public:
    void setBicycleInfo(string b, int s, int numb) {
        setInfo(b, s);
        Numb = numb;
    }

    void showBicycleInfo() {
        cout << "\n=== Velosiped ===" << endl;
        showInfo();
         cout << "Number of speeds: " << Numb << endl;
    }
};

int main() {

    while (true) {
        string input;
        cout << "\nVibirite (avto / velo / exit): ";
        cin >> input;

        if (input == "exit") {
            cout << "Exit success." << endl;
            break;
        }
        else if (input == "avto") {
            string brand;
            int speed, doors;

            cout << "Vvedite brand: ";
            cin >> brand;
            cout << "Vvedite max speed km/h: ";
            cin >> speed;
            cout << "Vvedite count of doors: ";
            cin >> doors;

            Car car;
            car.setCarInfo(brand, speed, doors);
            car.showCarInfo();
        }
        else if (input == "velo") {
            string brand;
            int speed, numb;

            cout << "Vvedite brand: ";
            cin >> brand;
            cout << "Vvedite max speed km/h: ";
            cin >> speed;
            cout << "how many of speeds?: ";
            cin >> numb;


            Bicycle bike;
            bike.setBicycleInfo(brand, speed, numb);
            bike.showBicycleInfo();
        }
        else {
            cout << "Nan. Try again" << endl;
        }
    }

    return 0;
}
