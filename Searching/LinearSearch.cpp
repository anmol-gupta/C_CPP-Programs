//Linear Search Algorithm
//This Algorithm is used to search for a number from an array

#include <iostream>
using namespace std;
 
int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
int main(void)
{
    int arr[] = { 6, 8, 9, 20, 40 };
    int x = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
   
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}