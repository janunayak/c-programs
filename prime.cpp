#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
 {
     int t;
	cin>>t;
	while(t--)
	{
	    int m;
	    cin>>m;
	    for(int i=3;i<=m/2;i++)
	    {
	        if(isPrime(i) && isPrime(m-i))
	        {
	            cout<<i<<" "<<m-i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
