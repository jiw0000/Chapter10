#include <stdio.h>

#define SIZE1 7
#define SIZE2 3

void copy_ptr(double[], double[], int);

int main()
{
	double list1[SIZE1] = { 1, 2, 3, 4, 5, 6, 7 };
	double list2[SIZE2];

	copy_ptr(list2, list1 + 3, SIZE2);

	for (int i = 0; i < SIZE2; i++)
		printf("%2.1lf ", list2[i]);
	printf("\n");

}

void copy_ptr(double* target, double* source, int len)
{
	for (int i = 0; i < len; i++)
		target[i] = *(source + i);
}