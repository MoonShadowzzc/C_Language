/* 调用函数求n的平方根和n!(n>0) */
#include <stdio.h>
#include <math.h>
int myfac(int n);

void main()
{
	int n = 0, z = 0;
	double y = 0;
	printf("Input N:");
	scanf("%d", &n);
	
	y = sqrt(n);
	z = myfac(n);
	
	printf("Square root of %d is %lf\n", n, y);
	printf("%d! = %d\n", n, z);
} 

int myfac(int n)
{
	int i = 0, z = 1;
	for(i=n; i>0; i--)
		z *= i;
	return z;
}
