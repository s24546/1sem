#include <iostream>
auto count_chars(char a, std::string z)
{
    int i,ile=0;
    for(i=0; i<z.size(); i++)
    {
        if(z[i]==a)
        {
            ile++;
        }
    }
    return ile;
}
int main()
{
    std::string n;
    char a;
    std::cout<<"Podaj tekst"<<"\n";
    std::cin>>n;
    std::cout<<"Podaj litere"<<"\n";
    std::cin>>a;
    std::cout<<count_chars(a,n);
    return 0;
}
