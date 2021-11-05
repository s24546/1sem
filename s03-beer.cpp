#include <iostream>

int main ( int argc , char * argv [])
{
for (int i=99; i>1; i--)
{
std :: cout << i << "Bottles of beer on the wall, \n" <<"\n"<< i << "Bottles of beer.Take one down, pass it around \n" << "\n";
}
std :: cout << "1 Bottle of beer on the wall, \n" << std :: endl << "Bottles of beer.Take one down, pass it around \n" << "\n";
std :: cout << "No more bottles of beer on the wall, no more bottles of beer.Go to the store and buy some more, 99 bottles of beer on the wall... \n";
return 0;
}

