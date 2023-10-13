#include <stdio.h>
#include <stdlib.h>

int main()
{
	char	**a;

	a = malloc(100);

	a[1] = malloc(20);	
	a[1][2] = 5;
	printf("array[1][2] = %d\n", a[1][2]);
}
