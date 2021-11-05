#include <iostream>

int main ()
{
    int a;
    std :: cin >> a;
    if (a>0)
    {
        std :: cout <<"Wynik:1 \n";
    }
    else if (a==0)
    {
        std :: cout <<"Wynik:0 \n";
    }
    else if (a<0)
    {
        std :: cout <<"Wynik:-1 \n";
    }
    return 0;
}
