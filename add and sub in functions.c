#include<stdio.h>
int add(int ,int);
int sub(int,int);
int main()
{
    int x,y,z;
	scanf("%d%d",&x,&y);
	z=add(x,y);
	printf("z= %d ",z);
	z=sub(x,y);
	printf("z=\n%d ",z);
	return 0;
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	int c;
	c=a-b;
	return c;
}