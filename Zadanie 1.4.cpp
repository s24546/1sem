#include <iostream>
#include <conio.h>
int main()
{
    std::string imie,imie2,imie3,imie4,imie5;
    std::cout << "Wpisz imiona: ";
    std::cin >> imie>>imie2>>imie3>>imie4>>imie5;

    if( imie[imie.size()-1] == 'a' )
    {
        std::cout << "Kobieta!\n";
    }
    else
    {
        std::cout << "Meczyzna!\n";
    }
    if( imie[imie2.size()-1] == 'a' )
    {
        std::cout << "Kobieta!\n";
    }
    else
    {
        std::cout << "Meczyzna!\n";
    }
    if( imie[imie3.size()-1] == 'a' )
    {
        std::cout << "Kobieta!\n";
    }
    else
    {
        std::cout << "Meczyzna!\n";
    }
    if( imie[imie4.size()-1] == 'a' )
    {
        std::cout << "Kobieta!\n";
    }
    else
    {
        std::cout << "Meczyzna!\n";
    }
    if( imie[imie5.size()-1] == 'a' )
    {
        std::cout << "Kobieta!\n";
    }
    else
    {
        std::cout << "Meczyzna!\n";
    }
    return 0;
}

