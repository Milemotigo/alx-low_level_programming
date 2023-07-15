#include "search_algos.h"

int recursion(int *array, size_t size, int value)
{
    size_t mid;
    size_t i;

    if (size == 0 || array == NULL)
        return (-1);

    mid = size / 2;

    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    if (array[mid] > value)
        return recursion(array, mid, value);
    else if (array[mid] < value)
    {
        int result = recursion(array + mid + 1, size - mid - 1, value);
        if (result != -1)
            return mid + 1 + result;
        else
            return -1;
    }
    else
        return mid;
}

int advanced_binary(int *array, size_t size, int value)
{
    return recursion(array, size, value);
}
