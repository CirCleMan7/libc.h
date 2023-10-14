#include <stdio.h>
#include <string.h>

int main()
{
	char a[5] = "Hello";

	bzero(a, 1);
	printf("%s", a);
}
