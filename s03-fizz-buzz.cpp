#include <iostream>

int main () 
{   
int a;
std :: cin >> a;
for (int i=1; i<=a; i++)
{      
std :: cout << i << std :: endl;
if (i%3==0)
{
std :: cout << "FIZZ" << std :: endl;
}   
if (i%5==0)
{
std :: cout << "BUZZ" << std :: endl;
}
}
return 0;
}
