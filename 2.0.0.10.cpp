#include <iostream>

int main ()
{
    int a, b=1, i=1;
    std :: cin >> a;
    do
    {
        std :: cout << i << std :: endl;
        b=i*b;
        i++;
    }
    while(i<=a);
        std :: cout << b << std :: endl;
    return 0;
}





