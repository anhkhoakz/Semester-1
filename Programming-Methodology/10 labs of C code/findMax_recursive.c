#include <stdio.h>

int findMaxRecursive(int[], int);
void testFindMaxRecursive();
int isSy

    int
    main(void)
{
    testFindMaxRecursive();
}

int findMaxRecursive(int arr[], int count)
{
    // Base case
    if (count == 1)
    {
        return arr[0];
    }

    // Recursive case
    else
    {
        int max = findMaxRecursive(arr, count - 1);
        if (max > arr[count - 1])
        {
            return max;
        }
        else
        {
            return arr[count - 1];
        }
    }
}

void testFindMaxRecursive()
{
    int a[] = {1, 30, 20, 100, 96};
    printf("Expect: 100; Actual: %d\n", findMaxRecursive(a, 5));
    printf("Expect: 30; Actual: %d\n", findMaxRecursive(a, 3));
    printf("Expect: 1; Actual: %d\n", findMaxRecursive(a, 1));
}