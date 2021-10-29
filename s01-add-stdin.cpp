#include <iostream>
#include <string>
int ask_user_for_integer()
{
    std::string a;
    std::cin >> a;
    return std::stoi(a);
}
int main ( int argc , char * argv [])
{
int a , b;
std :: cout << "Podaj liczbe \n";
a = ask_user_for_integer();
std :: cout << "Podaj druga liczbe \n";
b = ask_user_for_integer();
std :: cout << "Wynik: \n";
std :: cout << (a + b) << "\n";
return 0;
}
