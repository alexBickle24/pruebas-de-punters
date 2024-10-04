#include <stdio.h>

int main()
{
	char*  c = NULL;
	char** ptr = &c;

	printf("c:   %p\n", c);
	printf("&c:  %p\n", &c);
	printf("ptr: %p\n", ptr);

	return 0;
}
