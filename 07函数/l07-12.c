/* 数组名作为实参的程序 */
#include <stdio.h>
void myout(int *p, int n);
void main()
{
	int a[5] = {1,2,3,4,5};
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	myout(a, 5);		// 一维数组名和数组长度作为实参 
	myout(b, 10);
}

void myout(int *p, int n)	// 一维数组名对应的形参是指针变量p 
{
	int i = 0;
	for(i=0; i<n; i++)		// 输出时指针并不移动 
		printf("%3d", *(p+i));
	printf("\n"); 
}
