#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Definicja struktury przechowującej dane o przedmiocie
struct Przedmiot {
    string nazwa;
    string rozmiar;
    double wartosc;
    string dataSprowadzenia;
};

// --- PODPROGRAM A: Wyświetlanie stanu magazynowego ---
void wyswietlMagazyn(const vector<Przedmiot>& magazyn) {
    cout << "\n--- AKTUALNY STAN MAGAZYNU ---" << endl;
    cout << left << setw(20) << "Nazwa"
        << setw(15) << "Rozmiar"
        << setw(15) << "Wartosc"
        << "Data sprowadzenia" << endl;
    cout << string(65, '-') << endl;

    if (magazyn.empty()) {
        cout << "Magazyn jest pusty." << endl;
    }
    else {
        for (const auto& p : magazyn) {
            cout << left << setw(20) << p.nazwa
                << setw(15) << p.rozmiar
                << setw(15) << fixed << setprecision(2) << p.wartosc
                << p.dataSprowadzenia << endl;
        }
    }
    cout << "-------------------------------" << endl;
}

// --- PODPROGRAM B: Dodawanie nowej pozycji ---
void dodajPrzedmiot(vector<Przedmiot>& magazyn) {
    Przedmiot nowy;
    cout << "\n--- DODAWANIE NOWEGO PRZEDMIOTU ---" << endl;

    cout << "Podaj nazwe (np. Komputer, Telefon): ";
    cin.ignore(); // Czyszczenie bufora
    getline(cin, nowy.nazwa);

    cout << "Podaj rozmiar: ";
    getline(cin, nowy.rozmiar);

    cout << "Podaj wartosc: ";
    cin >> nowy.wartosc;

    cout << "Podaj date sprowadzenia (RRRR-MM-DD): ";
    cin.ignore();
    getline(cin, nowy.dataSprowadzenia);

    magazyn.push_back(nowy);
    cout << "\nPomyslnie dodano przedmiot!" << endl;

    // Wyświetlenie listy po aktualizacji
    wyswietlMagazyn(magazyn);
}

int main() {
    // Inicjalizacja magazynu kilkoma przykładowymi danymi
    vector<Przedmiot> magazyn = {
        {"Komputer Dell", "Tower", 3500.00, "2024-01-15"},
        {"iPhone 15", "6.1 cala", 4200.00, "2024-02-10"},
        {"Odtwarzacz BR", "Standard", 550.00, "2023-11-20"}
    };

    int wybor;
    do {
        cout << "\n--- SYSTEM MAGAZYNOWY ---" << endl;
        cout << "1. Wyswietl stan magazynu" << endl;
        cout << "2. Dodaj nowy przedmiot" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        switch (wybor) {
        case 1:
            wyswietlMagazyn(magazyn);
            break;
        case 2:
            dodajPrzedmiot(magazyn);
            break;
        case 0:
            cout << "Zamykanie programu..." << endl;
            break;
        default:
            cout << "Niepoprawny wybor!" << endl;
        }
    } while (wybor != 0);

    return 0;
}