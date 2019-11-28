#include<iostream>
using namespace std;         //count the total no vowels,consonants,digits and special in string.
int main()
{
	char s[30];
	std::cin>>s;
	int vowel,consonant,digits,special;
	vowel=consonant=digits=special=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'|| s[i]=='u'||
	       s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
	       {
	       	vowel++;
		   }
		   else if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
		   {
		   	consonant++;
		   }
		   else if(s[i]>=0 && s[i]<=9)
		   {
		   	digits++;
		   }
		   else
		   {
		   	special++;
		   }
	}
	cout<<vowel<<endl;
	cout<<consonant<<endl;
	cout<<digits<<endl;
	cout<<special<<endl;
}
