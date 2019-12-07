#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[20];
    char s2[20];
    cin>>s1>>s2;
    int x,y;
    x=strlen(s1);
    y=strlen(s2);
    if(x>y)
    std::cout<<x<<endl;
    else
    std::cout<<y<<endl;
    int i=0,j;
    while(s1[i]!='\0')
    {
        i++;
    }
        for(j=0;s2[j]!='\0';j++)
        {
            s1[i]=s2[j];
            i++;
        }


    s1[i]='\0';
    std::cout<<s1<<endl;

    return 0;
}
