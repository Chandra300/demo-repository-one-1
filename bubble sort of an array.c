#include<stdio.h>
int main()
{
	int i,j,temp;
	int n=10;
	int ar[10]={9,8,7,6,5,4,3,2,1,0};
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	return 0;
	
}