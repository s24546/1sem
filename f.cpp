#include <iostream>

int main()
{
int n;
std :: cout << "Podaj liczbę:";
std :: cin >> n;
	

if(n<2)
{
std :: cout << "Liczba " << n << " nie jest liczbą pierwszą" << std :: endl;
}
for(int i=2;i<=n;i++)
{
if(n%i==0)
{
std :: cout << "Liczba " << n << " nie jest liczbą pierwszą" << std :: endl;
break;
}
else
{
std :: cout << "Liczba " << n << " jest liczbą pierwszą" << std :: endl;
break;
}
}		
return 0;
}
