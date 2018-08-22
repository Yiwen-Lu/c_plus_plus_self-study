#include <iostream>
#include <time.h>

int main() {
	// Ref: http://www.cplusplus.com/reference/ctime/localtime/

	time_t rawtime;
	struct tm * timeinfo;

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	printf ("Current local time and date: %s \n", asctime(timeinfo));

	return 0;
}