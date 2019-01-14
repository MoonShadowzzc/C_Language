/* 调用自编函数mysum求1+2+3+...+n的值 */
#include <stdio.h>
int mysum(int n);
void main()
{
	int n = 0, y = 0;
	printf("Input n:");
	scanf("%d", &n);
	y = mysum(n);
	printf("1+2+3+...+%d = %d", n, y);
} 

int mysum(n)
{
	int i = 0, sum = 0;
	for(i=1; i<=n; ++i)
	{
		sum += i;
	}
	return sum;
}
