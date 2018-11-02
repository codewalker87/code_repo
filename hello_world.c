#include <stdio.h>
#include <time.h>
int main()
{
	char name[50];
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	
	printf("Date: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
	printf("Time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
	
	printf("Hello world\n");
	printf("Enter your name: ");
	scanf("%[^\n]s", name);
	printf("Welcome %s\n", name);
}
