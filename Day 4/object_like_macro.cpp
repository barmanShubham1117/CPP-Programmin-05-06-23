// C program to illustrate macros
#include <stdio.h>

// Macro definition
#define DATE 31

void temp();

// Driver Code
int main()
{
	// Print the message
	printf("Lockdown will be extended"
		" upto %d-MAY-2020\n",
		DATE);

    temp();

	return 0;
}

void temp() {
    cout << DATE;
}
