/* 假设数组中存放互不相同的10个数，要求从键盘输入一个整数，
 在数组中查找与其相同的数组元素，如果存在输出其下标。 */
#include <stdio.h>
void main()
{
	int k = 0, *p = NULL;
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	printf("Input k:");
	scanf("%d",&k);
	for(p=a; p<a+10; p++)
	{
		if(k == *p) break;
	}
	if(p-a<10)
		printf("Index = %d\n", p-a);
	else printf("%d is not exist!");
}
