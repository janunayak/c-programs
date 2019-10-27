#include<iostream>
using namespace std;
int main()
{
	int arr[7][7]={0};    //the size of the array is n*n,but initially declaring size of the array.
	                     // and assigning values to the array .
	int row,col;
	arr[0][0]=1,arr[1][0]=1,arr[1][1]=1;
	while(row<=7)
	{
		arr[row][0]=1;
		for(col=1;col<=row;col++)
		{
			arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
		}
		row++;
		
	}
	for(int i=0;i<7;i++)
	{
		cout<<endl;
		for(int j=0;j<=i;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
}
