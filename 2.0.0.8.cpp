#include <iostream>

int main ()
{
    int a, b=1;
    std :: cin >> a;
    for (int i=1; i<=a; i++)
    {
        std :: cout << i << std :: endl;
        b=i*b;
    }
    std :: cout << b << std :: endl;
    return 0;
}
