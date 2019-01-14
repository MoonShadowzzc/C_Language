/* 编写函数，求1- 1/2 + 1/3 - 1/4 + ... - 1/n的值 */
#include <stdio.h>
double mycal(int n);
void main()
{
	int n = 0;
	double sum = 0.0;
	printf("Input n :");
	scanf("%d", &n);
	
	sum = mycal(n);
	if(n <= 4)
	{
		printf("sum = %lf", sum);
	}
	else
	{
		printf("1- 1/2 + 1/3 - 1/4 + ... - 1/%d = %lf", n, sum);
	}
	
} 

double mycal(int n)
{
	double sum = 0.0;
	int i = 0;
	int sig = -1;
	for(i=1; i<=n; i++)
	{
		sig = sig*(-1);
		sum = sum + sig*1.0/i;		
	}
	return sum;
}
