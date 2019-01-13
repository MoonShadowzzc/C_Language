/* 输入三个不同的整数，存放在a, b, c中，再把这
   三个数按从小到大的顺序重新放入a,b,c并输出。 */
#include <stdio.h>
void main()
{
	int a, b, c, t;
	
	printf("Input a, b, c:");
	scanf("%d,%d,%d", &a, &b, &c);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	if(a > b)
	{   // a和b较小的放到 a处 
		t = a; a = b;b = t;
	}
	if(b > c)
	{	//  b和b较小的放到 b处
		t = c; c = b;b = t;
	}
	if(a > b)
	{	// 新换上来的b和a谁更小，放到a处 
		t = a; a = b;b = t;
	}
	
	printf("a = %d, b = %d, c = %d", a, b, c);	
 } 
