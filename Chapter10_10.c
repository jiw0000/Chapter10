#include <stdio.h>

#define SIZE 5

void plus_insert_arr(int, int[*], int[*], int[*]);
void print_arr(int, int[*]);

int main()
{
	int list1[SIZE] = { 1, 2, 3, 4, 5 };
	int list2[SIZE] = { 6, 7, 8, 9, 10 };
	int list3[SIZE];

	print_arr(SIZE, list1);
	print_arr(SIZE, list2);

	plus_insert_arr(SIZE, list1, list2, list3);

	print_arr(SIZE, list3);

}

void plus_insert_arr(int len, int list1[len], int list2[len], int list3[len])
{
	for (int i = 0; i < len; i++)
	{
		list3[i] = list1[i] + list2[i];
	}
}

void print_arr(int len, int list[len])
{
	for (int i = 0; i < len; i++)
		printf("%2d ", list[i]);
	printf("\n");
}