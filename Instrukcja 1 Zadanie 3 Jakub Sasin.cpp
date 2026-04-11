// Program wczytuje imie, nazwisko i numer indeksu studenta,
// a nastepnie wypisuje je w jednym komunikacie:
// Imie Nazwisko, numer indeksu: numer

#include <iostream>
#include <string>

int main()
{
    std::string imie;
    std::string nazwisko;
    std::string indeks;

    std::cout << "Podaj imie: ";
    if (!std::getline(std::cin, imie) || imie.empty()) {
        std::cerr << "Nieprawidlowe imie.\n";
        return 1;
    }

    std::cout << "Podaj nazwisko: ";
    if (!std::getline(std::cin, nazwisko) || nazwisko.empty()) {
        std::cerr << "Nieprawidlowe nazwisko.\n";
        return 1;
    }

    std::cout << "Podaj numer indeksu: ";
    if (!std::getline(std::cin, indeks) || indeks.empty()) {
        std::cerr << "Nieprawidlowy numer indeksu.\n";
        return 1;
    }

    std::cout << imie << " " << nazwisko << ", numer indeksu: " << indeks << "\n";

    return 0;
}
