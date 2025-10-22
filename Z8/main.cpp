#include <iostream>
#include <string>
using namespace std;

// Структура — простая точка
struct Point {
    double x;
    double y;
};

// Класс с наследованием от Point
class ColoredPoint : public Point {
public:
    string color;

    void set(double xValue, double yValue, string c) {
        x = xValue;
        y = yValue;
        color = c;
    }

    void show() {
        cout << "Point (" << x << ", " << y << "), color: " << color << endl;
    }
};

int main() {
    ColoredPoint p;

    double x, y;
    string c;

    cout << "Vvedite X, Y: ";
    cin >> x >> y;
    cout << "Vvedite color: ";
    cin >> c;

    p.set(x, y, c);
    p.show();

    return 0;
}
