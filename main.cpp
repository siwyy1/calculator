#include <iostream>
#include <limits>


int main() {
    double a, b;
    int choice;

    while (true){
    std::cout << "\nPodaj pierwsza liczbe:\n ";
    if (!(std::cin >> a)) {
        std::cout << "Blad danych\n";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
    }

    std::cout << "Podaj druga liczbe:\n ";
    if (!(std::cin >> b)) {
        std::cout << "Blad danych\n";

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        continue;
    }

    std::cout << "1. Dodaj\n";
    std::cout << "2. Odejmij\n";
    std::cout << "3. Pomnoz\n";
    std::cout << "4. Podziel\n";
    std::cout << "5. Wyjdz\n";
    std::cin >> choice;
    system("clear");

    switch (choice) {
        case 1:
            std::cout << "Wynik: " << a + b;
            break;
        case 2:
            std::cout << "Wynik: " << a - b;
            break;
        case 3:
            std::cout << "Wynik: " << a * b;
            break;
        case 4:
            if (a == 0 || b == 0) {
                std::cout << "Nie dziel przez zero"; }
            else {
                std::cout << "Wynik: " << a / b;
            }
            break;

        case 5:
            std::cout << "Koniec programu";
            return 0;

        default:
            std::cout << "Nieuprawnione dzialanie";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            continue;
    }



    }
}