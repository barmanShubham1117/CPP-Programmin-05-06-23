// C program to illustrate macros
#include <stdio.h>

// Multi-line Macro definition
#define ELE 'A', \
'B', \
'C'

// Driver Code
int main()
{

	// Array arr[] with elements
	// defined in macros
	char arr[] = { ELE };

	// Print elements
	printf("Elements of Array are:\n");

	for (int i = 0; i < 3; i++) {
		printf("%c ", arr[i]);
	}
	return 0;
}
