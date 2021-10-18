#include <iostream>
#include <string>

 int main()
{
int p;
do
{
std :: cout << "Guess?" << std :: endl;
std :: cin >> p;
if (p<50)
{
std :: cout << "Number too small!" << std :: endl;  
}
if (p>50)
{
std :: cout << "Number too big!"<< std :: endl;
}
}while (p!=50); 
std :: cout << "Just Right" << std :: endl;
return 0;
} 

