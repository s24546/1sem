auto is_divisible(int a, int c)
{
    if(a%c==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
auto is_even(int n) -> bool

{
    int z;
	std::cout<<"Podaj liczbe:";
	std::cin>>z;
	if(is_divisible(n,z))
	{
		return true;
	}
	return false;
}

int main()
{
    int b;
    std::cout<<"Podaj liczbe:"<<"\n";
    std::cin>>b;
    if (is_even(b))
    {
        std::cout<<"Liczba"<<" "<<b<<" "<<"dzieli sie"<<"\n";
    }
    else
    {
        std::cout<<"Liczba"<<" "<<b<<" "<<"nie dizeli sie"<<"\n";
    }
    return 0;
}


