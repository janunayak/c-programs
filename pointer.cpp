#include<iostream>
using namespace std;
int main()
{
	int i=2,j=4,k=8;
	int *p=&i,*q=&j,*r=&k;
	std::cout<<i<<" "<<j<<" "<<k<<" "<<*p<<" "<<*q<<" "<<*r<<endl;
	k=i;
	std::cout<<i<<" "<<j<<" "<<k<<" "<<*p<<" "<<*q<<" "<<*r<<endl;
	p=q;
	std::cout<<i<<" "<<j<<" "<<k<<" "<<*p<<" "<<*q<<" "<<*r<<endl;
	*q=*r;
	std::cout<<i<<" "<<j<<" "<<k<<" "<<*p<<" "<<*q<<" "<<*r<<endl;
	return 0;
}
