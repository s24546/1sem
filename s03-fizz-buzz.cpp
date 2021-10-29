#include <iostream>

int main ()
{
    int a;
    std :: cin >> a;
    for (int i=1; i<=a; i++)
    {

        if(i%3==0 && i%5==0)
        {
             std :: cout << i << std :: endl;
            std :: cout << "FIZZBUZZ" << std :: endl;
        }
        else if (i%3==0)
        {
             std :: cout << i << std :: endl;
            std :: cout << "FIZZ" << std :: endl;
        }
        else if (i%5==0)
        {
             std :: cout << i << std :: endl;
            std :: cout << "BUZZ" << std :: endl;
        }
    }
    return 0;
}
