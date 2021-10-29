#include <iostream>
#include <string>
#include <time.h>
int main()
{

    int p, d;
    srand(time(NULL));
    d=rand()%100+1;
    do
    {
        std :: cout << "Guess?" << std :: endl;
        std :: cin >> p;
        if (p<d)
        {
            std :: cout << "Number too small!" << std :: endl;
        }
        if (p>d)
        {
            std :: cout << "Number too big!"<< std :: endl;
        }
    }
    while (p!=d);
    std :: cout << "Just Right" << std :: endl;
    return 0;
}

