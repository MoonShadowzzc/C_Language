/* µ›πÈ«ÛN£° */
#include <stdio.h>
long int myfun(int n);
void main()
{
	int n = 0;
	long int x = 0;
	printf("Input N :");
	scanf("%d", &n);
	if(n<0)
	{
		printf("Wrong number(<0)\n");
	}
	else
	{
		x = myfun(n);
		printf("%d! = %ld", n, x);
	}
}

long int myfun(int n)
{
	long int x = 0;
	if(n == 0 || n == 1)	return 1;
	else
	{
		x = n * myfun(n-1);
		return x; 
	}
}
