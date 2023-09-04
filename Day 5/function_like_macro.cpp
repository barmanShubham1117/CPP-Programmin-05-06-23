// C program to illustrate macros
#include <stdio.h>

// Function-like Macro definition
// #define min(a, b) (((a) < (b)) ? (a) : (b))
#define ADD(a, b) ((a)+(b))

// Driver Code
int main()
{

	// Given two number a and b
	int p = 18;
	int q = 76;

	// printf("Minimum value between"
	// 	" %d and %d is %d\n",
	// 	p, q, min(p, q));

    printf("Sum: %d", ADD(p, q));

	return 0;
}
