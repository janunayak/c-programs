#include<iostream>
using namespace std;
//function to reverse a string
void recursivereverse(string &str,int i=0)
{
    int n=str.length();
    if(i==n/2)
      return;
       swap(str[i],str[n-i-1]);
      recursivereverse(str,i+1);
    
}
int main()
{
    string str;
    cin>>str;
    recursivereverse(str);
    cout<<str<<endl;
    return 0;
}
