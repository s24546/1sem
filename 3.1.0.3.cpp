#include <iostream>
auto asum(int a[], int n, int suma) -> int
{
    for(int i=0; i<n; i++)
    {
        suma=suma+a[i];
    }


}

int main()
{
    int suma=0;
    int a[]= {42,9,-1,18,59,3,101,31,72,12};
    for(int i=0; i<=10; i++)
    {
        suma=suma+a[i];
        std::cout<<"Dodaje"<<"\n";
        std::cout<<suma<<"\n";
    }
    return 0;
}
