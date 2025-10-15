//question is read 10 numbers and find their sum and average 
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avrg;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		avrg=sum/10;
	}
		printf("sum of the  %d numbers = %d ",n,sum);
		printf("avrg of the %d numbers= %.2f ",n,avrg);
	
	
}
