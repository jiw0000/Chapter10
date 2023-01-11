#include <stdio.h>

#define SIZE 5

void copy_arr(double[], double[], int);
void copy_ptr(double*, double*, int);
void copy_ptr2(double*, double*, double*);
void print_arr(double*, int len);

int main()
{
	double source[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[SIZE];
	double target2[SIZE];
	double target3[SIZE];

	copy_arr(target1, source, SIZE);
	copy_ptr(target2, source, SIZE);
	copy_ptr2(target3, source, source + SIZE);

	print_arr(source, SIZE);
	print_arr(target1, SIZE);
	print_arr(target2, SIZE);
	print_arr(target3, SIZE);

}

void copy_arr(double target[], double source[], int len)
{
	for (int i = 0; i < len; i++)
		target[i] = source[i];
}

void copy_ptr(double* target, double* source, int len)
{
	for (int i = 0; i < len; i++)
		*(target + i) = *(source + i);
}

void copy_ptr2(double* target, double* source, double* len)
{
	for (int i = 0; source < len; i++, source++)
		target[i] = *source;
}

void print_arr(double* array, int len)
{
	for (int i = 0; i < len; i++)
		printf("%lf ", *(array + i));
	printf("\n");
}