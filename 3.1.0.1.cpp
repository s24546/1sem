#include <iostream>
auto init(int a[], int n, int start) -> void
{
     for(int i=0;i<=n;i++)
    {
     a[i-1]=0;
    }
}

int main()
{
    int rozm;
    int a[50000];
    std::cout<<"Podaj rozmiar tablicy: ";
    std::cin>>rozm;
    for(int i=0;i<rozm;i++)
   {
       std::cout<<a[i]<<"\n";
   }
return 0;
}
