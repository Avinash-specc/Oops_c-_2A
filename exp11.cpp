#include <iostream>
using namespace std;

class Calculator {
public:

    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;
    cout << "Addition of integers: "
         << calc.add(10, 20) << endl;
    cout << "Addition of floats: "
         << calc.add(10.54, 20.52) << endl;
    cout << "Addition of doubles: "
         << calc.add(10.2554, 20.5475) << endl;
    cout << "Addition of three integers: "
         << calc.add(10, 20, 30) << endl;

    return 0;
}