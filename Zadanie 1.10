#include <iostream>
#include <string>

void box_print(std::string a, std::string b, std::string c, std::string d, std::string e) {
	int dlugosc;
	if(a.length()>=b.length()){
		dlugosc = a.length();
	}
	else
	{
		dlugosc = b.length();
	}

	if (c.length() > dlugosc)
	{
		dlugosc = c.length();
	}

	if (d.length() > dlugosc)
	{
		dlugosc = d.length();
	}

	if (e.length() > dlugosc)
	{
		dlugosc = e.length();
	}

	for(int i = 0; i < dlugosc+4;i++ )
	{
		std::cout << "*";
	}
	std::cout <<"\n" << "* "<<a;
	for (int i = 0; i < dlugosc - a.length(); i++) {
		std::cout << " ";
	}
	std::cout <<" *";
	std::cout << "\n" << "* " << b;
	for (int i = 0; i < dlugosc - b.length(); i++) {
		std::cout << " ";
	}
	std::cout << " *";
	std::cout << "\n" << "* " << c;
	for (int i = 0; i < dlugosc - c.length(); i++) {
		std::cout << " ";
	}
	std::cout << " *";
	std::cout << "\n" << "* " << d;
	for (int i = 0; i < dlugosc - d.length(); i++) {
		std::cout << " ";
	}
	std::cout << " *";
	std::cout << "\n" << "* " << e;
	for (int i = 0; i < dlugosc - e.length(); i++) {
		std::cout << " ";
	}
	std::cout << " *"<<"\n";

	for (int i = 0; i < dlugosc + 4; i++)
	{
		std::cout << "*";
	}
}

int main() {
	std::string slowo[5];
	std::cin >> slowo[0];
	std::cin >> slowo[1];
	std::cin >> slowo[2];
	std::cin >> slowo[3];
	std::cin >> slowo[4];
	box_print(slowo[0],slowo[1],slowo[2],slowo[3],slowo[4]);
	
	return 0;
}
