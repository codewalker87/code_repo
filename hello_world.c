#include <stdio.h>
int main()
{
	char name[50];
	printf("Hello world\n");
	printf("Enter your name: ");
	scanf("%[^\n]s", name);
	printf("Welcome %s\n", name);
}
