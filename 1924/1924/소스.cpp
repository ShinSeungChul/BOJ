#include<cstdio>
#include<iostream>

using namespace std;

int main(int argc, const char * argv[])
{
	int mon, day, i, count = 0;
	char month_count[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cin >> mon >> day;

	for (i = 1; i < mon; i++)
		count += month_count[i - 1];

	count += day - 1;

	switch (count % 7)
	{
	case 0:
		printf("MON");
		break;
	case 1:
		printf("TUE");
		break;
	case 2:
		printf("WED");
		break;
	case 3:
		printf("THU");
		break;
	case 4:
		printf("FRI");
		break;
	case 5:
		printf("SAT");
		break;
	case 6:
		printf("SUN");
		break;
	}
}



