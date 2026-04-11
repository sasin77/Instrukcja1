// Program oblicza średnią prędkość v = s / t
// Pobiera od użytkownika drogę (s) i czas (t) jako liczby zmiennoprzecinkowe.

#include <iostream>
#include <iomanip>

int main()
{
    double s = 0.0; // droga (np. w kilometrach)
    double t = 0.0; // czas (np. w godzinach)

    std::cout << "Podaj droge (np. w kilometrach): ";
    if (!(std::cin >> s)) {
        std::cerr << "Nieprawidlowe dane dla drogi.\n";
        return 1;
    }

    std::cout << "Podaj czas (np. w godzinach): ";
    if (!(std::cin >> t)) {
        std::cerr << "Nieprawidlowe dane dla czasu.\n";
        return 1;
    }

    if (t <= 0.0) {
        std::cerr << "Czas musi byc wiekszy od zera.\n";
        return 1;
    }

    double v = s / t; // srednia predkosc

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Srednia predkosc: " << v << " (jednostka: jednostka drogi / jednostka czasu)\n";

    return 0;
}
