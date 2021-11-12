#include <iostream>

int main ()
{
    int a, b, n;
    std :: cin >> a;
    std :: cin >> b;
    for (int i=0; i<=a; i++)
    {

        if (i%b==0)
        {
            std :: cout << i << std :: endl;
            n=n+i;

        }
    }
    std :: cout << n << std :: endl;
    return 0;
}
