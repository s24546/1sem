#include <iostream>

int main()
{
    int n;
    std :: cout << "Podaj liczbe:";
    std :: cin >> n;
    if(n<2)
    {
        std :: cout << "Liczba " << n << " nie jest liczba pierwsza" << std :: endl;
    }
    else if(n==2)
    {
        std :: cout << "Liczba " << n << " jest liczba pierwsza" << std :: endl;
        std :: cout << 2 << std :: endl;
    }
    else
    {

        for(int i=2; i<=n; i++)
        {
            if(n%i==0)
            {
                std :: cout << "Liczba " << n << " nie jest liczba pierwsza" << std :: endl;
                break;
            }
            else
            {
                std :: cout << "Liczba " << n << " jest liczba pierwsza" << std :: endl;





                break;
            }
        }
    }

    return 0;
}
