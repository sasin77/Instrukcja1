// Kalkulator: dodawanie, odejmowanie, mnozenie, dzielenie,
// pierwiastkowanie (stopnia 2) oraz potegowanie (kwadrat).
// Liczby zmiennoprzecinkowe sa obslugiwane.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    std::cout << std::fixed << std::setprecision(4);

    while (true) {
        std::cout << "\nKALKULATOR\n";
        std::cout << "1) Dodawanie (a + b)\n";
        std::cout << "2) Odejmowanie (a - b)\n";
        std::cout << "3) Mnozenie (a * b)\n";
        std::cout << "4) Dzielenie (a / b)\n";
        std::cout << "5) Pierwiastek kwadratowy (sqrt(a))\n";
        std::cout << "6) Potegowanie do kwadratu (a^2)\n";
        std::cout << "0) Wyjscie\n";
        std::cout << "Wybierz opcje: ";

        int opcja;
        if (!(std::cin >> opcja)) {
            std::cerr << "Nieprawidlowy wybor. Konczenie programu.\n";
            return 1;
        }

        if (opcja == 0) {
            std::cout << "Koniec.\n";
            break;
        }

        double a = 0.0, b = 0.0;

        switch (opcja) {
        case 1: // dodawanie
            std::cout << "Podaj a: "; if (!(std::cin >> a)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Podaj b: "; if (!(std::cin >> b)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Wynik: " << (a + b) << "\n";
            break;

        case 2: // odejmowanie
            std::cout << "Podaj a: "; if (!(std::cin >> a)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Podaj b: "; if (!(std::cin >> b)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Wynik: " << (a - b) << "\n";
            break;

        case 3: // mnozenie
            std::cout << "Podaj a: "; if (!(std::cin >> a)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Podaj b: "; if (!(std::cin >> b)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Wynik: " << (a * b) << "\n";
            break;

        case 4: // dzielenie
            std::cout << "Podaj a: "; if (!(std::cin >> a)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Podaj b (nie 0): "; if (!(std::cin >> b)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            if (b == 0.0) { std::cerr << "Blad: dzielenie przez zero.\n"; break; }
            std::cout << "Wynik: " << (a / b) << "\n";
            break;

        case 5: // sqrt
            std::cout << "Podaj a (>= 0): "; if (!(std::cin >> a)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            if (a < 0.0) { std::cerr << "Blad: pierwiastek z liczby ujemnej.\n"; break; }
            std::cout << "Wynik: " << std::sqrt(a) << "\n";
            break;

        case 6: // square
            std::cout << "Podaj a: "; if (!(std::cin >> a)) { std::cerr << "Nieprawidlowe dane.\n"; return 1; }
            std::cout << "Wynik: " << (a * a) << "\n";
            break;

        default:
            std::cerr << "Nieznana opcja. Sprobuj ponownie.\n";
            break;
        }

        // czyscimy ewentualne resztki wstrzymanego wejscia (np. newline)
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    return 0;
}
