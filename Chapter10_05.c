#include <stdio.h>

#define SIZE 10

double cal_res(double[], int);

int main()
{
	double list[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	double result;

	result = cal_res(list, SIZE);

	printf("max - min : %2.1lf\n", result);

}

double cal_res(double list[], int len)
{
	double max, min, result;

	max = min = list[0];

	for (int i = 1; i < len; i++)
	{
		if (max < list[i])
			max = list[i];
		else if (min > list[i])
			min = list[i];
	}

	result = max - min;

	return result;
}