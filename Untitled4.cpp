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
struct student {
    std::string name;
    std::string surname;
    std::vector marks;

    student(std::string const& n, std::string const& s, std::vector m) {
        name = n;
        surname = s;
        marks = m;
    }
}
int main() {

	double a;
	std::vector <double> oceny;
	std::cout<<"Podaj liczby:\n";
	for(int i=0;i<m.size();i++)
	{
		std::cin>>a;
		liczby.push_back(a);
	}
	std::cout<<average_of(liczby);
	return 0;
}
