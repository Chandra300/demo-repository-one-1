#include<stdio.h>
int main()
{
	int n,total;
	scanf("%d",&n);
	int i;
	for(i=1;i<n;i++)
	{
	 if(n%i==0)
		{
			total+=i;
	     }
			
	}
	printf("%d ",total);
}
	 
		
  
	