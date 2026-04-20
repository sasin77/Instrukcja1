#include <iostream>

using namespace std;

// Typ wyliczeniowy zawierajacy 12 filmów (po 3 na każdy z 4 gatunków) oraz opcję dodatkową
enum TytulFilmu {
    // Sci-Fi
    MATRIX = 1, INCEPCJA, INTERSTELLAR,
    // Komedia
    SHREK, KILER, NIETYKALNI,
    // Dramat
    JOKER, PIANISTA, TITANIC,
    // Horror
    OBECNOSC, LSNIENIE, PILA,
    // Opcja pusta
    ZADEN
};

int main() {
    int numer;
    // Wybór autora programu (możesz tu wpisać dowolny tytuł z listy)
    TytulFilmu mojUlubiony = MATRIX;

    cout << "--- LISTA FILMOW WEDLUG GATUNKOW ---" << endl;
    cout << "[Sci-Fi]  1. Matrix, 2. Incepcja, 3. Interstellar" << endl;
    cout << "[Komedia] 4. Shrek, 5. Kiler, 6. Nietykalni" << endl;
    cout << "[Dramat]  7. Joker, 8. Pianista, 9. Titanic" << endl;
    cout << "[Horror]  10. Obecnosc, 11. Lsnienie, 12. Pila" << endl;
    cout << "13. Zaden z wymienionych" << endl;

    cout << "Wybierz numer swojego ulubionego filmu: ";
    cin >> numer;

    // Sprawdzenie poprawności danych (bez negacji)
    // Jeśli numer mieści się w zakresie od 1 do 13, dane są poprawne
    if (numer >= 1 && numer <= 13) {

        // Rzutowanie liczby int na typ enum
        TytulFilmu wyborUzytkownika = (TytulFilmu)numer;

        // Sprawdzenie czy użytkownik lubi to samo co autor
        if (wyborUzytkownika == mojUlubiony) {
            cout << "Mamy taki sam gust! Tez uwielbiam ten film." << endl;
        }
        else {
            cout << "Wybrales inny film niz ja, ale kazdy ma wlasny gust." << endl;
        }

    }
    else {
        // Blok wykonany, gdy użytkownik wpisze liczbę spoza zakresu
        cout << "Blad: Podano nieprawidlowy numer wyboru." << endl;
    }

    return 0;
}