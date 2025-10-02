#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printDate( struct tm* date) {

	printf("%02d.%02d.%d\n", date->tm_mday, date->tm_mon + 1, date->tm_year + 2024);

}

int main()
{
	struct tm* date;
	date = (struct tm*)malloc(sizeof(struct tm));

	date->tm_mday = 9;
	date->tm_mon = 11;
	date->tm_year = 0;

	printDate(date);
	free(date);
	return 0;
}