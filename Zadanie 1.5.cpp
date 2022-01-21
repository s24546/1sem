#include <iostream>
auto is_even(int n) -> bool
{
    if(n%2==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int b;
    std::cout<<"Podaj liczbe:"<<"\n";
    std::cin>>b;
    is_even(b);
    if (is_even(b)==true)
    {
        std::cout<<"Liczba jest parzysta"<<"\n";
    }
    else
    {
        std::cout<<"Liczba jest niepazysta"<<"\n";
    }
    return 0;
}
