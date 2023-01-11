#include <stdio.h>

#define SIZE1 3
#define SIZE2 5

void doubleUp_arr(int[][SIZE2], int);
void print_arr(int[][SIZE2], int);

int main()
{
	int list[SIZE1][SIZE2] = {
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 }
	};

	print_arr(list, SIZE1);

	doubleUp_arr(list, SIZE1);

	print_arr(list, SIZE1);

}

void doubleUp_arr(int list[][SIZE2], int len)
{
	for (int i = 0; i < len; i++)
		for (int j = 0; j < sizeof(list[i]) / sizeof(list[i][0]); j++)
			list[i][j] *= 2;
}

void print_arr(int list[][SIZE2], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < sizeof(list[i]) / sizeof(list[i][0]); j++)
			printf("%2d ", list[i][j]);
		printf("\n");
	}
}