/* #undef */
#include <stdio.h>
#define N 3.14159 	// 此时N代表字符串3.14159
void fun();
void main() 
{
	printf("N=%f\n",N);
	fun();
}

#undef N		// 此时N已经不是宏名 
#define N 3+5	// N 代表字符串3+5 
#define M 2*N 	// M 代表字符串2*3+5
void fun()
{
	printf("N=%d, M=%d", N,M);
 } 
