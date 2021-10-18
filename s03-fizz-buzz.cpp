
#include <iostream>

int main () 
{   
int a;
std :: cin >> a;
if (a%3)
{
std :: cout << "FIZZ" << std :: endl;
}   
if (a%5)
{
std :: cout << "BUZZ" << std :: endl;
}
for (int i=a-1; i>0; i--)
{      
std :: cout << i << std :: endl;
if (i%3)
{
std :: cout << "FIZZ" << std :: endl;
}   
if (i%5)
{
std :: cout << "BUZZ" << std :: endl;
}
}
return 0;
}

