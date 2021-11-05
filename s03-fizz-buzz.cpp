#include <iostream>

int main (int argc , char * argv [])
{
    int a;
    std :: cin >> a;
    for (int i=1; i<=a; i++)
    {

        if(i%3==0 && i%5==0)
        {
             std :: cout << i << "\n";
            std :: cout << "FIZZBUZZ \n";
        }
        else if (i%3==0)
        {
             std :: cout << i << "\n";
            std :: cout << "FIZZ \n";
        }
        else if (i%5==0)
        {
             std :: cout << i <<"\n" ;
            std :: cout << "BUZZ \n" ;
        }
    }
    return 0;
}
