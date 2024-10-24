#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    void setFraction(int num, int den) {
        numerator = num;
        denominator = den;
    }

    void display() const {
        if (denominator == 1) {
            cout << numerator << endl;
        }
        else {
            cout << numerator << "/" << denominator << endl;
        }
    }

    Fraction add(const Fraction& other) const {
        Fraction result;
        result.setFraction(numerator * other.denominator + other.numerator * denominator,
            denominator * other.denominator);
        return result;
    }

    Fraction subtract(const Fraction& other) const {
        Fraction result;
        result.setFraction(numerator * other.denominator - other.numerator * denominator,
            denominator * other.denominator);
        return result;
    }

    Fraction multiply(const Fraction& other) const {
        Fraction result;
        result.setFraction(numerator * other.numerator, denominator * other.denominator);
        return result;
    }

    Fraction divide(const Fraction& other) const {
        Fraction result;
        result.setFraction(numerator * other.denominator, denominator * other.numerator);
        return result;
    }
};

int main() {
    Fraction f1, f2, result;

    f1.setFraction(3, 4);
    f2.setFraction(5, 6);

    result = f1.add(f2);
    cout << "f1 + f2 =";
    result.display();

    result = f1.subtract(f2);
    cout << "f1 - f2 =";
    result.display();

    result = f1.multiply(f2);
    cout << "f1 * f2 =";
    result.display();

    result = f1.divide(f2);
    cout << "f1 / f2 =";
    result.display();

}
