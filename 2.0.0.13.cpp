

#include <iostream>

int main ()
{
    int a, b;
    std :: cout << "Podaj dane: ";
    std :: cin >> a;
    for (int i=a; i>0; i--)
    {
        for (int j=i; j>0; j--)
        {
            std :: cout <<"*";
        }
    std :: cout <<"\n" ;
    }
    return 0;
}
