// Program pobiera od uzytkownika cztery zmienne: a, b, c, d.
// Modyfikuje je nastepujaco:
// a = a + 3
// b = b * 4
// c = c / 2
// d = d^2
// Nastepnie wyswietla nowe wartosci oraz oblicza wyrazenie:
// x = (3*a + 7*c) * d - b/2

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c, d;

    std::cout << "Podaj a: ";
    if (!(std::cin >> a)) {
        std::cerr << "Nieprawidlowe dane dla a.\n";
        return 1;
    }

    std::cout << "Podaj b: ";
    if (!(std::cin >> b)) {
        std::cerr << "Nieprawidlowe dane dla b.\n";
        return 1;
    }

    std::cout << "Podaj c: ";
    if (!(std::cin >> c)) {
        std::cerr << "Nieprawidlowe dane dla c.\n";
        return 1;
    }

    std::cout << "Podaj d: ";
    if (!(std::cin >> d)) {
        std::cerr << "Nieprawidlowe dane dla d.\n";
        return 1;
    }

    // Modyfikacje
    a += 3.0;
    b *= 4.0;
    c /= 2.0;
    d = std::pow(d, 2);

    double x = (3.0 * a + 7.0 * c) * d - (b / 2.0);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nowe wartosci:\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    std::cout << "d = " << d << "\n";
    std::cout << "Wartosc wyrazenia x = " << x << "\n";

    return 0;
}
