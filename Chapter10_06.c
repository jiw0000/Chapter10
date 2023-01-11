#include <stdio.h>

#define SIZE 5

void set_reversal(double[], int len);

int main()
{
	double list[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };

	set_reversal(list, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%2.1lf ", list[i]);
	printf("\n");

}

void set_reversal(double list[], int len)
{
	for (int i = 0; i < len; i++)
		list[i] *= -1;
}