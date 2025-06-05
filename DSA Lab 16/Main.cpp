#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Search.h"

using namespace std;

int main() 
{
    srand(time(0));
    int sizes[] = { 10, 100, 1000, 5000, 10000, 20000, 50000 };
    cout << "N\tSequential Successful\tSequential Unsuccessful\tBinary Successful\tBinary Unsuccessful\n";
    for (int i = 0; i < 7; i++) 
    {
        int n = sizes[i];
        int* arr = new int[n];
        for (int j = 0; j < n; j++) 
        {
            arr[j] = j + 1;
        }
        int comparisons;
        cout << n << "\t";
        if (n <= 100) 
        {
            int key = arr[rand() % n];
            SequentialSearch(arr, n, key, comparisons);
            cout << comparisons << "\t\t\t";
            key = -1;
            SequentialSearch(arr, n, key, comparisons);
            cout << comparisons << "\t\t\t";
            cout << "-\t\t\t-\n";
        }
        else 
        {
            cout << "-\t\t\t-\t\t\t";
            int key = arr[rand() % n];
            BinarySearch(arr, n, key, comparisons);
            cout << comparisons << "\t\t\t";
            key = -1;
            BinarySearch(arr, n, key, comparisons);
            cout << comparisons << endl;
        }
        delete[] arr;
    }
    return 0;
}