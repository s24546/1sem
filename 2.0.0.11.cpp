

#include <iostream>

int main ()
{
    int a, b;
    std :: cout << "Podaj dlugosc ";
    std :: cin >> a;
    std :: cout << "Podaj szerokosc ";
    std :: cin >> b;
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            std :: cout <<"*";
        }
    std :: cout <<"\n" ;
    }
    return 0;
}
