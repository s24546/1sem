#include <iostream>
#include <string>

auto is_palindrome(std::string d) -> bool
{
    std::string a;
    a=d;
    for (auto i = 0; i < d.size() / 2; i++)
    {
        auto tmp = d[i];
        d[i] = d[d.size() - 1 - i];
        d[d.size() - 1 - i] = tmp;
    }
    std::cout<<d<<"\n";

    if (a==d)
    {
        return true;

    }
    else
    {
        return false;
    }

}
int main()
{
    std::string y;
    std::cout<<"Podaj slowo"<<"\n";
    std::cin>> y;
    if(is_palindrome(y))
    {
        std::cout<< "to slowo jest palindromem \n";
    }
    else
    {
        std::cout<<"to slowo nie jest palindromem \n";
    }
}
