#include <stdio.h>
#include <time.h>
int main()
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	system("clear");
	puts("Hello world");
	printf("Date: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
	printf("Time: %d:%d:%d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}
