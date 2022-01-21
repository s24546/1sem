#include <iostream>
#include <string>
auto main() -> int
{

    auto str1 = std::string();
    auto str2 = std::string();
    std::cout<<"Podaj Imie:"<<std::endl;
    std::cin>>str1;
    std::cout<<"Podaj drugie imie:"<<"\n";
    std::cin>>str2;
    if(str1.size()==str2.size())
    {
        std::cout<<"Imiona sa tej samej dlugosci."<<"\n";
    }
    else if(str1.size()>str2.size())
    {
        std::cout<<"Pierwsze imie jest dluzsze!"<<"\n";
    }
    else
    {
        std::cout<<"Drugie imie jest dluzsze..."<<"\n";
    }

    return 0;
}

