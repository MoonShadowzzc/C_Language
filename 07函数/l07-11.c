/* 函数的嵌套调用 */
#include <stdio.h>
int mysum(int n);
int myf(int i);
void main()
{
	int n=0, s=0;
	printf("Input n:");
	scanf("%d", &n);
	s = mysum(n);
	printf("n = %d, s = %d\n", n, s);
}

int mysum(int n)
{
	int i=0, s=0;
	for(i=1; i<=n; ++i)
		s = s + myf(i);
	return s;
}

int myf(int i)
{
	return i+5;
}
