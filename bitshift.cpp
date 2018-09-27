#include <iostream>
int main()
{
int i;
i = 1;
int count;
count = 0;
while (i != 0) {
		i = i << 1;
		count = count+1;
		}
std::cout<<count<<"\n";
return 0;
}
