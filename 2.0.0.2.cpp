#include <iostream>

int main ()
{
    int a, b, c, d;
    std::cout << "Podaj pierwsza liczbe ";
    std::cin >> a;
    std::cout << "Podaj druga liczbe ";
    std::cin >> b;
    std::cout << "Podaj trzecia liczbe ";
    std::cin >> c;
    if(c==0)
    {
        std::cout << "c nie moze byc zerem \n";
    }
    else
    {
        for (int i=a; i<b; i++)
        {

            d=i%c;
            if(d==0)
            {
                std::cout<<i<<std::endl;
            }

        }
        return 0;
    }
}
