#include <iostream> // Biblioteka pozwalajaca na wypisywanie i wczytywanie tekstu z konsoli
#include <queue>    // Biblioteka zawierajaca gotowa strukture kolejki priorytetowej

using namespace std; // Uzywamy standardowej przestrzeni nazw, zeby kod byl krotszy

int main() {
    priority_queue<int> kolejka; // Tworzymy kolejke priorytetowa przechowujaca liczby calkowite

    kolejka.push(10); // Dodajemy pierwsza z trzech poczatkowych liczb bezposrednio w kodzie
    kolejka.push(50); // Dodajemy druga liczbe (w kolejce priorytetowej ona wskoczy na sam szczyt, bo jest najwieksza)
    kolejka.push(20); // Dodajemy trzecia liczbe bezposrednio w kodzie

    int dzialamy = 1; // Zmienna decydujaca o tym, czy program ma dzialac (1 oznacza dzialanie)

    while (dzialamy == 1) { // Petla dziala tak dlugo, jak zmienna jest rowna 1 (brak uzycia negacji)

        cout << "\n"; // Drukujemy pusta linijke dla lepszej czytelnosci ekranu

        // Punkt 1: Wyswietlenie glownego elementu na szczycie kolejki
        if (kolejka.size() > 0) { // Sprawdzamy czy kolejka ma wiecej niz 0 elementow (zastepuje negacje !empty)
            cout << "Najwyzszy priorytet (szczyt): " << kolejka.top() << "\n"; // Pokazujemy najwiekszy element
        }
        else { // W przeciwnym wypadku (gdy wielkosc to 0)
            cout << "Kolejka jest pusta.\n"; // Informujemy, ze nic w niej nie ma
        }

        // Punkt 2: Wyswietlenie menu glownego z opisami
        cout << "--- MENU KOLEJKI PRIORYTETOWEJ ---\n"; // Wyswietlamy tytul menu
        cout << "1. Push (Dodaj liczbe do kolejki)\n"; // Wyswietlamy opcje numer 1
        cout << "2. Pop (Usun najwieksza liczbe z kolejki)\n"; // Wyswietlamy opcje numer 2
        cout << "3. Size (Sprawdz ile jest elementow)\n"; // Wyswietlamy opcje numer 3
        cout << "4. Empty (Czy kolejka jest pusta?)\n"; // Wyswietlamy opcje numer 4
        cout << "5. Zakonczenie programu\n"; // Wyswietlamy opcje numer 5

        // Punkt 3: Pobranie wyboru od uzytkownika
        cout << "Wybierz opcje (1-5): "; // Prosimy uzytkownika o wpisanie cyfry
        int wybor; // Tworzymy zmienna na liczbe, ktora wpisze uzytkownik
        cin >> wybor; // Wczytujemy z klawiatury wybor uzytkownika
        cout << "\n"; // Drukujemy pusta linijke dla ladnego wygladu

        // Punkt 4: Obsluga wybranych opcji za pomoca prostych warunkow
        if (wybor == 1) { // Co ma sie wydarzycz, gdy wpisano cyfre 1
            cout << "Podaj liczbe do dodania: "; // Prosimy o wpisanie wlasnej liczby
            int nowa_liczba; // Tworzymy zmienna na te liczbe
            cin >> nowa_liczba; // Zapisujemy wpisana liczbe
            kolejka.push(nowa_liczba); // Dodajemy wpisana liczbe do kolejki
        }
        else if (wybor == 2) { // Co ma sie wydarzycz, gdy wpisano cyfre 2
            if (kolejka.size() > 0) { // Sprawdzamy, czy wielkosc kolejki jest wieksza od zera
                kolejka.pop(); // Jesli tak, usuwamy najwiekszy element (ten ze szczytu)
                cout << "Usunieto element z kolejki.\n"; // Potwierdzamy usuniecie
            }
            else { // W przeciwnym razie (kolejka ma 0 elementow)
                cout << "Blad - brak elementow do usuniecia!\n"; // Ostrzegamy uzytkownika
            }
        }
        else if (wybor == 3) { // Co ma sie wydarzycz, gdy wpisano cyfre 3
            cout << "W kolejce jest " << kolejka.size() << " elementow.\n"; // Pokazujemy aktualny rozmiar
        }
        else if (wybor == 4) { // Co ma sie wydarzycz, gdy wpisano cyfre 4
            if (kolejka.size() == 0) { // Sprawdzamy czy rozmiar jest dokladnie rowny zero
                cout << "Odpowiedz: Tak, kolejka jest pusta.\n"; // Potwierdzamy, ze jest pusta
            }
            else { // W przeciwnym razie (rozmiar wiekszy niz zero)
                cout << "Odpowiedz: Nie, kolejka ma elementy.\n"; // Informujemy, ze sa tam jakies liczby
            }
        }
        else if (wybor == 5) { // Co ma sie wydarzycz, gdy wpisano cyfre 5
            dzialamy = 0; // Zmieniamy wartosc na 0, co zatrzyma glowna petle programu
        }
        else { // Gdy uzytkownik wpisze jakakolwiek inna wartosc niz 1,2,3,4,5
            cout << "Wybrano zla liczbe, sprobuj ponownie.\n"; // Informujemy o bledzie wejscia
        }
    } // Zamkniecie petli while

    return 0; // Standardowe zakonczenie programu bez bledow
} // Zamkniecie glownej funkcji main