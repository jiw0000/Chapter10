#include <stdio.h>

#define SIZE 10

int get_max(int[], int);

int main()
{
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max_idx;

	max_idx = get_max(list, SIZE);

	printf("max_idx : %d, max_val : %d\n", max_idx, list[max_idx]);

}

int get_max(int list[], int len)
{
	int max_idx = 0;

	for (int i = 1; i < len; i++)
		if (list[max_idx] < list[i])
			max_idx = i;

	return max_idx;
}