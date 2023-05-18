#include <stdio.h>

int countValue(int target, int arr[], int size);

int main(void)
{
	int list[] = {9, -2, 1, 7, 3, 9, -5, 7, 2, 1, 7, -2, 0, 8, -3};

	printf("Expected 3: Actual %d\n", countValue(7, list, 15));
	printf("Expected 2: Actual %d\n", countValue(1, list, 15));
	printf("Expected 0: Actual %d\n", countValue(10, list, 15));
}

// int countValue(int target, int arr[], int size){
//	int i, d = 0;
//
//	for(i = 0; i < size; i++){
//		if(arr[i] == target)
//			d = d + 1;
//	}
//
//	//printf("%d", d);
//	return d;
// }

int countValue(int target, int arr[], int size)
{
	// base case
	if (size == 0)
		return 0;
	// recursive case
	else
	{
		if (arr[size] == target)
			return 1 + countValue(target, arr, size - 1);
		else
		{
			return countValue(target, arr, size - 1);
		}
	}
}
