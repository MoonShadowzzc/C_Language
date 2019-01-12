/* Âß¼­±í´ïÊ½ */
#include <stdio.h>
void main()
{
	int x=1;
	printf("%d", x>=0 && x<=2);		//1
	x = 5;
	printf("%d", x>=0 && x<=2);		//0
	printf("%d", x<=-3 || x>=3);	//1
	
	x = 0;
	printf("%d", x<=-3 || x>=3);	//0
	printf("%d", !x);				//1
	
	x = 5;
	printf("%d", !x);				//0
	printf("%d", 3 && 'A');			//1
	printf("%d", (x=2) || 0);		//1
	printf("x = %d\n", x=2);	
}
