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
int main()
{
    int b;
    std::cout<<"Podaj liczbe:"<<"\n";
    std::cin>>b;
    is_even(b);
    return 0;
