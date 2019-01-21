/* 移动和比较两个指针 */
#include <stdio.h>
void main()
{
	int a[10] = {0}, *p = NULL, *q = NULL;
	p = a; q = &a[3];
	p = p+8;
	if(q>p) printf("Q>P \n");
	else printf("Q<=P\n");
	printf("%d\n", q - p);
}
