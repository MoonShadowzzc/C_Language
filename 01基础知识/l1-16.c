#include <stdio.h>
void main()
{
	int a=1, b=0, c=0;
	a+=a*=a+(b=2);
	// b=1 a=1 a+b=3
	// a+=a*=3  a*=3 a=a*3  a=3
	// a+=3 a=a+3 a=6
	
	printf("a=%d, b=%d, c=%d", a, b, c=a);
	// a=6, b=2, c=a=6;
}   
