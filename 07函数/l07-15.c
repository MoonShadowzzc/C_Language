/* 二维数组名作实参 */
#include <stdio.h>
#define M 3
#define N 4
void myout(int p[M][N]);
void main()
{
	int a[M][N] = { {1, 2, 3, 4},
					{5, 6, 7, 8},
					{9,10,11,12}};
	myout(a); 
}
void myout(int p[M][N])
{
	int i=0, j=0;
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
			printf("%5d",p[i][j]);
		printf("\n");
	}
}
