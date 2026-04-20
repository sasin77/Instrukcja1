#include <iostream> // Biblioteka do wczytywania i wypisywania tekstu
#include <list>     // Biblioteka zawierajaca gotowa strukture listy

using namespace std; // Przestrzen nazw, by kod byl krotszy i prostszy

int main() {
    list<int> moja_lista; // Tworzymy nowa, pusta liste przechowujaca liczby calkowite

    // Krok 1: Dodawanie na poczatek (najpierw 35, potem przed nia 89)
    moja_lista.push_front(35); // Dodajemy liczbe 35 na poczatek listy
    moja_lista.push_front(89); // Dodajemy liczbe 89 na sam poczatek (przed 35)
    cout << "Krok 1: Dodano 35 i 89 na poczatek listy.\n"; // Wyswietlamy komentarz

    // Krok 2: Dodawanie na koniec
    moja_lista.push_back(-9); // Dodajemy liczbe -9 na sam koniec listy
    cout << "Krok 2: Dodano -9 na koniec listy.\n"; // Wyswietlamy komentarz

    // Krok 3: Wyswietlenie stanu listy
    cout << "\nKrok 3: Obecny stan listy: "; // Drukujemy informacje dla uzytkownika
    for (int liczba : moja_lista) { // Przechodzimy po kolei przez wszystkie liczby w liscie
        cout << liczba << " "; // Drukujemy kazda z nich oddzielona spacja
    }
    cout << "\n"; // Drukujemy znak nowej linii dla lepszego wygladu

    // Krok 4: Pytanie o element na poczatek
    cout << "\nKrok 4: Jaka liczbe chcesz dodac na poczatek listy? "; // Prosimy o liczbe
    int na_poczatek; // Tworzymy zmienna na odpowiedz
    cin >> na_poczatek; // Pobieramy wpisana liczbe
    moja_lista.push_front(na_poczatek); // Dodajemy te liczbe na poczatek

    // Krok 5: Pytanie o element na koniec
    cout << "Krok 5: Jaka liczbe chcesz dodac na koniec listy? "; // Prosimy o kolejna liczbe
    int na_koniec; // Tworzymy zmienna na druga odpowiedz
    cin >> na_koniec; // Pobieramy wpisana liczbe
    moja_lista.push_back(na_koniec); // Dodajemy te liczbe na koniec

    // Krok 6: Wyswietlenie stanu listy po dodaniu elementow
    cout << "\nKrok 6: Stan listy po Twoich zmianach: "; // Informacja dla uzytkownika
    for (int liczba : moja_lista) { // Ponownie przegladamy elementy
        cout << liczba << " "; // Drukujemy zawartosc
    }
    cout << "\n"; // Znak nowej linii

    // Krok 7: Sortowanie listy (domyslnie rosnaco)
    moja_lista.sort(); // Uzywamy gotowej funkcji sort(), by ulozyc liczby od najmniejszej
    cout << "\nKrok 7: Posortowano elementy rosnaco.\n"; // Wyswietlamy komentarz

    // Krok 8: Wyswietlenie posortowanej listy
    cout << "Krok 8: Stan listy po sortowaniu rosnacym: "; // Informacja dla uzytkownika
    for (int liczba : moja_lista) { // Sprawdzamy zawartosc
        cout << liczba << " "; // Drukujemy cyfry
    }
    cout << "\n"; // Znak nowej linii

    // Krok 9: Sortowanie odwrotne (malejaco)
    moja_lista.reverse(); // Uzywamy funkcji reverse(), by odwrocic aktualny, rosnacy porzadek
    cout << "\nKrok 9: Zastosowano sortowanie odwrotne (odwrocono kolejnosc).\n"; // Komentarz

    // Krok 10: Ostatnie wyswietlenie stanu listy
    cout << "Krok 10: Ostateczny stan listy: "; // Komunikat koncowy
    for (int liczba : moja_lista) { // Znowu petla by zobaczyc liczby
        cout << liczba << " "; // Drukowanie na ekran
    }
    cout << "\n"; // Nowa linijka

    cout << "\nKoniec programu.\n"; // Informacja o zakonczeniu

    return 0; // Komunikat do systemu, ze wszystko poszlo dobrze
}