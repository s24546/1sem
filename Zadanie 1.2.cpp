#include <iostream>
#include <vector>

double average_of(std::vector <double> liczby)
{
	double licznik=0;
	for(int i=0;i<liczby.size();i++)
	{
		licznik+=liczby[i];
	}
	return licznik/liczby.size();
}
int main() {
	int n;
	double a;
	std::vector <double> liczby;
	std::cout<<"Podaj iloœæ liczb: ";
	std::cin>>n;
	std::cout<<"Podaj liczby:\n";
	for(int i=0;i<n;i++)
	{
		std::cin>>a;
		liczby.push_back(a);
	}
	std::cout<<average_of(liczby);
	return 0;
}
