#include "Search.h"

int SequentialSearch(int arr[], int size, int key, int& comparisons) 
{
    comparisons = 0;
    for (int i = 0; i < size; i++) 
    {
        comparisons++;
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int key, int& comparisons) 
{
    int low = 0, high = size - 1;
    comparisons = 0;
    while (low <= high) {
        comparisons++;
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}