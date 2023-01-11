#include <stdio.h>

#define SIZE1 3
#define SIZE2 5

void copy_arr(int, int, double[*][*], double[*][*]);
void print_arr(int, int, double[*][*]);

int main()
{
	double list[SIZE1][SIZE2] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 }
	};
	double list2[SIZE1][SIZE2];

	copy_arr(SIZE1, SIZE2, list, list2);
	print_arr(SIZE1, SIZE2, list2);

}

void copy_arr(int n1, int n2, double mainArr[n1][n2], double subArr[n1][n2])
{
	for (int i = 0; i < n1; i++)
		for (int j = 0; j < n2; j++)
			subArr[i][j] = mainArr[i][j];
}

void print_arr(int n1, int n2, double array[n1][n2])
{
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
			printf("%2.1lf ", array[i][j]);
		printf("\n");
	}
}