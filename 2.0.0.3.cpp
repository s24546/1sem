#include <iostream>

int main ()
{
int a, b;
std :: cin >> a;
std :: cin >> b;
for (int i=a; i<b; i=i+a)
{
std :: cout << i << std :: endl;
}
   return 0;
}
