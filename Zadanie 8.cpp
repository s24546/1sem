#include <iostream>
auto funkcja(std::string z, int n)
{
    int i;
    for(i=0; i<z.size(); i++)
    {
        i=i+n-1;
        std::cout<<z[i];
    }

}
int main()
{
    std::string a;
    int d;
    std::cout<<"Podaj tekst"<<"\n";
    std::cin>>a;
    std::cout<<"Podaj liczbe"<<"\n";
    std::cin>>d;
    std::cout<<"Litery:"<<"\n";
    funkcja(a,d);
    return 0;
}
