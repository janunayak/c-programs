
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	std::cin>>t;
	while(t--)
	{
	    int m,n,k;
	   std::cin>>m>>n;
	    k=m+n;
	    int a[k];
	    for(int i=0;i<k;i++)
	    std::cin>>a[i];
	    sort(a,a+k);
	    for(int i=0;i<k;i++)
	    std::cout<<a[i]<<" ";
	    std::cout<<endl;
	}
	return 0;
}
