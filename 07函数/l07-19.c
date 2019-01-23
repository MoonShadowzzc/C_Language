/* 指针数组 */
#include <stdio.h>
#include <string.h>

void main() 
{
	int i=0, k=0;
	char *temp = NULL;
	char *p[4];		// 指针数组p，其中的4个变量都是指针
	p[0] = "Zhang";
	p[1] = "Li";
	p[2] = "Chen";
	p[3] = "Wang";
	printf("before :\n");
	for(i=0; i<4; i++)
		printf("p[%d] -> %s\n", i, p[i]);
	printf("\n");
	
	for(i=0; i<4; i++)
		if(strcmp(p[i],p[k]) < 0)
			k = i;
	temp = p[0]; p[0] = p[k]; p[k] = temp;
	printf(" after :\n");
	for(i=0; i<4; i++)
		printf("p[%d] -> %s\n", i, p[i]);
	printf("\n");
}
