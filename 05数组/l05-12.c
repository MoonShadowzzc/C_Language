/* 整形数组排序:从大到小 */
#include <stdio.h>
void main()
{
	int t=0,i=0,j=0,k=0;
	int a[10] = {2,8,4,1,9,3,6,5,7,0};
	for(i=0; i<10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	
	for(i=0; i<10; i++)
	{
		k = i;
		for(j=i+1; j<10; j++)
		{
			if(a[k] < a[j])
				k = j;
		}
		if(k!=i)
		{
			t = a[k];
			a[k] = a[i];
			a[i] = t;
		}
	}
	
	for(i=0; i<10; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
} 
