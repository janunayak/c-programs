#include<iostream>
using namespace std;    //lower to upper and upper to lower.
int main()
{
	char s[20];
	std::cin>>s;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	std::cout<<s<<endl;
}
