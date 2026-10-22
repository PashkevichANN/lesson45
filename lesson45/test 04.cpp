#include "until.h"
#include "Windows.h"
//unsighned short int все значения положительны
// 
// time_t == long long

/*typedef unsigned short int tiny*/;
//tiny n;
int main() {
	long long start = time(NULL);

	Sleep(5000);

	long long finish = time(NULL);

	long long total_time = finish - start;

	int second = total_time % 60;
	int minute = total_time / 60 % 60;
	int hour = total_time / 3600 % 24;

	return 0;
}