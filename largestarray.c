#include<stdio.h>
void main()
{
	int arr[20],i,n,largest,secondlargest;
	printf("enter n values:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	secondlargest=arr[1];
	for(i=0;i<n;i++)
	{
		if(arr[i]<largest)
		{
			if(arr[i]>secondlargest)
			{
				secondlargest=arr[i];
			}
		}
	}
	printf("the largest element in the array is %d\n",largest);
	printf("the secondlargest element in the array is %d",secondlargest);
}
