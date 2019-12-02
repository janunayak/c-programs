#include<iostream>
using namespace std;
//function to reverse a string
void reverse(string& str)
{
    int n=str.length();
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        swap(str[i],str[j]);
        //swap two characters starting from two corners.
    }
    
}
int main()
{
    string str;
    cin>>str;
    reverse(str);
    std::cout<<str<<endl;
    return 0;
}
