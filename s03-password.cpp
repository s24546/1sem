#include <iostream>
#include <string>

 int main()
{
std::string p, d;
std::cout << "Podaj dane:" << std::endl;
std::cin >> d;
do
{
std::cout << "Podaj haslo:" << std::endl;
std::cin >> p;

}while (p!=d);
std::cout << "OK!" << std::endl;
return 0;
}


