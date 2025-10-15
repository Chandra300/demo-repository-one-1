#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	scanf("%f%f",&celsius,&fahrenheit);
	fahrenheit=(celsius)*(9.0/5.0)+32;
	printf("%.2f\n",fahrenheit);
	celsius=(fahrenheit-32)*(9.0/5.0);
	printf("%.2f",celsius);
}