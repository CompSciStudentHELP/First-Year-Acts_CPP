#include <iostream>
using namespace std;
class Poly {
private:
    double a;
    double b;
    double c;

public:
    Poly(double a = 0, double b = 0, double c = 0) : a(a), b(b), c(c) {}

    Poly operator+(const Poly& other) const {
        return Poly(a + other.a, b + other.b, c + other.c);
    }

    friend ostream& operator<<(std::ostream& os, const Poly& poly) {
        bool hasTerms = false; // Flag to check if any non-zero terms are present

        if (poly.a != 0) {
            os << (poly.a < 0 ? "- " : "");
            os << std::abs(poly.a) << "x^2";
            hasTerms = true;
        }

        if (poly.b != 0) {
            if (hasTerms) {
                os << (poly.b < 0 ? " - " : " + ");
            }
            else {
                os << (poly.b < 0 ? "- " : "");
            }
            os << std::abs(poly.b) << "x";
            hasTerms = true;
        }

        if (poly.c != 0) {
            if (hasTerms) {
                os << (poly.c < 0 ? " - " : " + ");
            }
            else {
                os << (poly.c < 0 ? "- " : "");
            }
            os << std::abs(poly.c);
            hasTerms = true;
        }

        if (!hasTerms) {
            os << "0";
        }

        return os;
    }
};

int main() {
    Poly q1(3, 4, -2);
    Poly q2(-4, 0, 10);
    Poly sum;

    sum = q1 + q2;

    std::cout << q1 << endl;
    std::cout << q2 << endl;
    std::cout << sum;

    return 0;
}
