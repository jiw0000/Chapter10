#include <stdio.h>

#define MONTHS 12
#define YEARS 5

void aver_year_rain(int, int, float[*][*]);
void aver_month_rain(int, int, float[*][*]);

int main()
{
	const float rain[YEARS][MONTHS] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};

	aver_year_rain(YEARS, MONTHS, rain);
	aver_month_rain(YEARS, MONTHS, rain);

}

void aver_year_rain(int year, int month, float rain[year][month])
{
	float subtot, total;

	printf("�⵵	���췮(��ġ)\n");
	for (int y = 0; y < year; y++)
	{
		for (int m = 0; m < month; m++)
			subtot += rain[y][m];
		printf("%5d %15.1f\n", 2010 + y, subtot);
		total += subtot;
	}
	printf("\n����� ���췮�� %.1f��ġ�Դϴ�.\n",
		total / year);

}

void aver_month_rain(int year, int month, float rain[year][month])
{
	float subtot;

	printf("����� ���췮�� ������ �����ϴ�.\n\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (int m = 0; m < month; m++)
	{
		for (int y = 0; y < year; y++)
			subtot += rain[y][m];
		printf("%4.1f ", subtot / year);
	}
	printf("\n");
}