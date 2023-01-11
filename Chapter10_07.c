#include <stdio.h>

#define SIZE1 3
#define SIZE2 5

void copy_arr(double[], double[], int);

int main()
{
	double list1[SIZE1][SIZE2] =
	{ {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15} };
	double list2[SIZE1][SIZE2];

	for (int i = 0; i < SIZE1; i++)
		copy_arr(list2[i], list1[i], SIZE2);

	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
			printf("%2.1lf ", list2[i][j]);
		printf("\n");
	}

}

void copy_arr(double target[], double source[], int len)
{
	for (int i = 0; i < len; i++)
		target[i] = source[i];
}