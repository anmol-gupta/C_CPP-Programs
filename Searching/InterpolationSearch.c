> Here is the simple code snippet of the interpolation search.

#include<stdio.h>

int interploationSearch(int a[], int n, int data) {
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high) {
        mid = low + (((data - a[low]) * (high - low))/(a[high] - a[low]));
        if(a[mid] == data) {
            return mid;
        } else if(a[mid]<data) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;
}

int main() {
    int a[] = {10,20,30,40,50};
    int n = 5;
    int data,dataIdx;
    printf("Enter the data to be searched:");
    scanf("%d",&data);
    dataIdx = interploationSearch(a,n,data);
    printf("Data is found at position %d", dataIdx+1);
    return 0;
}

> For interpolation search to be efficient data should be sorted and uniformly sorted.
