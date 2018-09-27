#include <iostream>
int main()
{
int a;
a = 5;
int b;
b = 10;
std::cout<<"a: "<<a<<" b: "<<b<<"\n";

a = a+b;
b = a-b;
a = a-b;
std::cout<<"a: "<<a<<" b: "<<b<<"\n";
return 0;


}
