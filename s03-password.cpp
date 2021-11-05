#include <iostream>
#include <string>

 int main (int argc , char * argv [])
{
std::string p, d;
std::cout << "Podaj dane: \n";
std::cin >> d;
do
{
std::cout << "Podaj haslo: \n";
std::cin >> p;

}while (p!=d);
std::cout << "OK! \n";
return 0;
}
