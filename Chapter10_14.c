#include <stdio.h>
#include <ctype.h>

#define SIZE1 3
#define SIZE2 5

void input_number(int, int, double[*][*]);
double aver_arr(int, double[*]);
double aver_arr2(int, int, double[*][*]);
double find_max(int, int, double[*][*]);

int main()
{
	double list[SIZE1][SIZE2];
	double arr_aver[SIZE1];
	double arr_aver2;
	double max;

	input_number(SIZE1, SIZE2, list);

	for (int i = 0; i < SIZE1; i++)
		arr_aver[i] = aver_arr(SIZE2, list[i]);
	arr_aver2 = aver_arr2(SIZE1, SIZE2, list);
	max = find_max(SIZE1, SIZE2, list);

	for (int i = 0; i < SIZE1; i++)
		printf("%d번 행 평균 : %4.2lf\n", i, arr_aver[i]);
	printf("\n");
	printf("전체 평균 : %4.2lf\n\n", arr_aver2);
	printf("최대값 : %4.2lf\n", max);

}

void input_number(int size1, int size2, double list[size1][size2])
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			scanf("%lf", &list[i][j]);
		}
	}

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
			printf("%4.2lf ", list[i][j]);
		printf("\n");
	}
}

double aver_arr(int size2, double list[size2])
{
	double aver = 0;

	for (int i = 0; i < size2; i++)
		aver += list[i];

	return (aver / size2);
}

double aver_arr2(int size1, int size2, double list[size1][size2])
{
	double aver = 0;

	for (int i = 0; i < size1; i++)
		for (int j = 0; j < size2; j++)
			aver += list[i][j];

	aver /= (size1 * size2);
	return aver;
}

double find_max(int size1, int size2, double list[size1][size2])
{
	double max = list[0][0];

	for (int i = 0; i < size1; i++)
		for (int j = 0; j < size2; j++)
			if (max < list[i][j])
				max = list[i][j];

	return max;
}