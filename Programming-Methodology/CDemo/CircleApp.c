#include <stdio.h>
#include <math.h>

#include <stdbool.h>

// function to check if three sider form a triangle or not
bool checkValidity(int a, int b, int c)
{
    // check condition
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    return true;
}

int main(void)
{
    bool result = checkValidity(3, 4, 100);

    printf("Result %d", result);
}
