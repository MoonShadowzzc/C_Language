/* 指针数组名作实参 */
#include <stdio.h>
#include <string.h>

void mymin(char **w, int n);

void main()
{
	char *p[4];
	int i=0;
	p[0] = "Zhang";
	p[1] = "Li";
	p[2] = "Chen";
	p[3] = "Wang";
	
	printf("before :\n");
	for(i=0; i<4; i++)
		printf("p[%d] -> %s\n", i, p[i]);
	printf("\n");
	
	mymin(p, 4);
	
	printf(" after :\n");
	for(i=0; i<4; i++)
		printf("p[%d] -> %s\n", i, p[i]);
	printf("\n");
}

void mymin(char **w, int n)
{
	int i=0, k=0;
	char *temp = NULL;
	for(i=1; i<n; i++)
		if(strcmp(w[i],w[k]) < 0)
			k = i;
	temp = w[0]; w[0] = w[k]; w[k] = temp;
}
