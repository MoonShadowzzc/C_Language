/* 指针变量和一维数组  */
#include <stdio.h>
void main()
{
	int i=0, a[5]={0};
	int *p = NULL;
	double b[3] = {0};
	double *q = NULL;
	
	p = a;
	q = &b[2];
	
	for(i=0; i<5; i++)
	{
		*(p+i) = i;
		printf("%4d", *(a+i));
	}
	printf("\n");
	
	*q = 5;
	*(q-1) = 6;
	*(q-2) = 7;
	printf("%4.1lf%4.1lf%4.1lf\n",b[0],b[1],b[2]);
}
