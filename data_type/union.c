#include <stdio.h>


union
{
	int a;
	float b;
	long double c;

}union_test;

int main(void)
{
	union_test.a=4;
	printf("ziseof(\"union_test\")=%zu\n\n",sizeof(union_test));
	printf("union_test.a=%d\n",union_test.a);
	printf("union_test.b=%f\n",union_test.b);
	printf("union_test.c=%f\n",union_test.c);


return 0;
}
