/* ц╟ещеепР */
#include <stdio.h>
void main()
{
	int i=0, j=0;
	int t;
	int a[10] = {0};
	
	printf("Input 10 intgers :\n");
	for(i=0; i<10 ;i++)
	{
		printf("%d : ", i+1);
		scanf("%d", &a[i]);
	}
	printf("Before : ");
	for(i=0; i<10 ;i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	for(i=0; i<9; i++)
		for(j=1; j<10-i; j++)
		{
			if(a[j-1] > a[j])
			{
				t = a[j-1];
				a[j-1] = a[j];
				a[j] = t;
			}
		}
	printf("After  : ");
	for(i=0; i<10 ;i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
		
	
} 
