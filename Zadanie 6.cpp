#include <iostream>
auto is_even(int n) -> void
{
    if(n%2==0)
    {
        std::cout<<"true"<<"\n";
    }
    else
    {
        std::cout<<"false"<<"\n";
    }
}
auto is_divisible(int a, int c) -> void
{
    if(a%c==0)
    {
        std::cout<<a<<" jest podzielne przez "<<c<<"\n";
    }
    else
    {
        std::cout<<a<<" nie jest podzielne przez "<<c<<"\n";
    }
}
int main()
{
    int b,g;
    std::cout<<"Podaj liczby:"<<"\n";
    std::cin>>b>>g;
    is_even(b);
    is_divisible(b,g);
    return 0;
}


