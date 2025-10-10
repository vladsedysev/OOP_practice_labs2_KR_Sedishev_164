#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    vector<int> grades;  

public:
    void addGrade(int grade) {
        if (grade >= 1 && grade <= 5) { 
            grades.push_back(grade);
        } else {
            cout << "Ocenka ot 1 do 5!" << endl;
        }
    }

    double getAverage() {
        if (grades.empty()) {
            return 0.0;
        }

        int sum = 0;
        for (int g : grades) {
            sum += g;
        }
        return static_cast<double>(sum) / grades.size();
    }
};

int main() {

    Student s;

    int n, grade;
    cout << "Skolko ocenok? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Vvedite #" << i + 1 << ": ";
        cin >> grade;
        s.addGrade(grade);
    }

    cout << "Sr ball: " << s.getAverage() << endl;

    return 0;
}
