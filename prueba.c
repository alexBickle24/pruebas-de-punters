// *(int *)&aux_p[j]
// (int)aux_p[j]

int main()
{
	int i = 42;
	void* p = &i;

	printf("%d\n", *(int *)&p[0]);
	printf("%d\n", *(int *)(p + 0));
	printf("%d\n", *(((int *)(p)) + 0));
	printf("%d\n", ((int *)(p))[0]);
	printf("%d\n", ((int *)p)[0]);
}
