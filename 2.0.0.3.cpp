#include <iostream>

int main ()
{
    int a, b, s;
    std :: cin >> a;
    std :: cin >> b;
    std :: cin >> s;
    for (int i=a; i<b; i=i+s)
    {
        if (s==0)
        {
            std :: cout <<"Trzecia liczba nie moga byc zerem \n";
            break;
        }
        else
        {
            std :: cout << i << std :: endl;
        }
    }
        return 0;
    }
