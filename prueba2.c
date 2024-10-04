#include <string.h>

int main()
{
	char* p1   = "p1";
	char  p2[] = "p2";

	printf("p1: %s\np2: %s\n", p1, p2);

	// memset(p1, 0, 2);
	// printf("p1: %s\np2: %s\n", p1, p2);

	memset(p2, 0, 2);
	printf("p1: %s\np2: %s\n", p1, p2);
}
