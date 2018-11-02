#include <stdio.h>
int main()
{
	char name[20];
	printf("Hello world\n");
	printf("Enter your name: ");
	scanf("\n%s", name);
	printf("Welcome %s", name);
}
