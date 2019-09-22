#include<iostream>
using namespace std;
int main()
{
	int *numptr=new int;
	std::cout<<"*numptr:"<<*numptr<<endl;
	std::cout<<"numptr:"<<numptr<<endl;
	std::cout<<"&numptr:"<<&numptr<<endl;
	
	*numptr=42;
	std::cout<<"numptr assigned to 42:"<<endl;
	std::cout<<"*numptr:"<<numptr<<endl;
	std::cout<<"numptr:"<<numptr<<endl;
	std::cout<<"&numptr:"<<&numptr<<endl;
	return 0;
	
}
