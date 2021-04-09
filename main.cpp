#include <iostream>
#include <cstdio>

int main( void )
{
    int Polecenie, a, b;
    Polecenie = 0;
   
    do {
        std::cout << "[1] Dodawanie"
        << std::endl << "[2] Odejmowanie"
        << std::endl << "[3] Mnozenie"
        << std::endl << "[4] Dzielenie"
        << std::endl << "[5] Rezygnuj"
        << std::endl << "Twoje polecenie:";
       
        std::cin >> Polecenie;
       
        switch( Polecenie ) {
        case 1:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << a + b << std::endl;
            break;
           
        case 2:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << a - b << std::endl;
            break;
           
        case 3:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << a * b << std::endl;
            break;
           
        case 4:
            std::cout << "Podaj pierwsza liczbe:";
            std::cin >> a;
            std::cout << "Podaj druga liczbe:";
            std::cin >> b;
            std::cout << "Wynik: " << a / b << std::endl;
           
            break;
           
        case 5:
            break;
           
        default:
            std::cout << "Nieprawidlowe polecenie." << std::endl;
        }
    } while( Polecenie != 5 );
   
    std::cout << "Spierdalaj!";
    return 0;
}
