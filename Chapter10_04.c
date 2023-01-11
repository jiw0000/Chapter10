#include <stdio.h>

#define SIZE 10

int get_max(double[], int);

int main()
{
	double list[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0 };
	int max_idx;

	max_idx = get_max(list, SIZE);

	printf("max_idx : %d, max_val : %2.1lf\n", max_idx, list[max_idx]);

}

int get_max(double list[], int len)
{
	int max_idx = 0;

	for (int i = 1; i < len; i++)
		if (list[max_idx] < list[i])
			max_idx = i;

	return max_idx;
}