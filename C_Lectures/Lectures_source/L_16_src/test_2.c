#include <stdio.h>

struct test
{
	int i;
	char c;
	double d;
};

int main(void)
{
	struct test t;

	printf("address of &t is= %p\n\n", &t);

	printf("address of t.i = %p \t offset of t.i = %d (%d)\n",
                                &t.i, (int) &((struct test*) 0)->i, (char*) &t.i - (char*) &t);

	printf("address of t.c = %p \t offset of t.c = %d (%d)\n",
                                &t.c, (int) &((struct test*) 0)->c, (char*) &t.c - (char*) &t);

	printf("address of t.d = %p \t offset of t.d = %d (%d)\n",
                                &t.d, (int) &((struct test*) 0)->d, (char*) &t.d - (char*) &t);

	printf("\ncomputed address of &t using:\n");

	printf("\taddress and offset of t.i = %p\n",
	      (struct test*) (((char*) &t.i) - ((int) &((struct test*) 0)->i)));

	printf("\taddress and offset of t.c = %p\n",
	      (struct test*) (((char*) &t.c) - ((int) &((struct test*) 0)->c)));

	printf("\taddress and offset of t.d = %p\n",
	      (struct test*) (((char*) &t.d) - ((int) &((struct test*) 0)->d)));

	return 0;
}
