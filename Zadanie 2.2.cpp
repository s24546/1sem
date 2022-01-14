#include <iostream>
#include <vector>
#include <string>
int a;
auto filter_palidromes(std::vector<std::string> a)
{
    std::vector<std::string> k;
    int x = a.size();

    for(int i=0; i<x; i++)
    {
        int z=0;
        int y = a[i].length();
        for(int j=0; j<y; j++)
        {
            if(a[i][j]==a[i][y-1-j])
            {
                z=z+1;
            }
        }
        if(z==y)
        {
            k.push_back(a[i]);
        }
    }
    return k;
}

int main()
{
    std::vector<std::string> slowa = {"zlew","anna","kajak","sos","drzewo", "alicja"};
    std::cout<<"Ze slow: zlew, anna, kajak, sos, drzewo, alicja tylko wyswietlone ponizej sa palindromami: \n";
    filter_palidromes(slowa);
    for(int i=0; i<4; i++)
    {
        std::cout << filter_palidromes(slowa)[i]<< std::endl;
    }

    return 0;
}
