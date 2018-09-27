#include<iostream>
int main()
{
	int a;
	a = 5;
	int b;
  	b = 15;
std::cout<<"Csere előtt "<<a<<" "<<b<<"\n";
a = a*b;
b = a/b;
a = a/b;
std::cout<<"Csere után "<<a<<" "<<b<<"\n";
}
