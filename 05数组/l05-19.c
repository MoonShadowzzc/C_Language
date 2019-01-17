/* 二维数组的定义和输出 */
#include <stdio.h>
void main()
{
	int a[3][2] = {{1,2},{3,4},{5,6}};
	int i=0,j=0,b[2][5];
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<5; j++)
			scanf("%d", &b[i][j]);
	}
	printf("Array a :\n");
	for(i=0; i<3; i++) 
	{
		for(j=0; j<2; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	printf("Array b :\n");
	for(i=0; i<2; i++) 
	{
		for(j=0; j<5; j++)
			printf("%3d", b[i][j]);
		printf("\n");
	}
}
