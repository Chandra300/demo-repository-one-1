#include<stdio.h>
int main()
{
	char s[100];
	scanf("%[^\n]s",s);
	int i,freq[10]={0};
		for(i=0;s[i]!='0';i++)
		{
			if(s[i]>=0 && s[i]<=9)
			{
				freq[s[i]-0]++;
			}
		}
		printf("Digit frequency:\n");
		printf("0 1 2 3 4 5 6  7 8\n----------\n");
		for(i=0;i<10;i++)
		{
			printf("%d",freq[i]);
		}
	return 0;
}