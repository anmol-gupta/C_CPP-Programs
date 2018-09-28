#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[], int n) {
	int i,j,key;
	for(j=1;j<n;j++) {
		i = j-1;
		key = arr[j];
		while(i>=0 && arr[i]>key) {
			arr[i+1] = arr[i];
			i--;
		}
		arr[i+1] = key;
	}
}

int main() {
	int arr[100], n, i;
	printf("Enter range of an array: \n");
	scanf("%d", &n);
	printf("Enter elements of an array:\n");
	for(i=0;i<n;i++) {
		scanf("%d", &arr[i]);
	}
	printf("\nArray before sorting: \n");
	for(i=0;i<n;i++) {
		printf("%d, ", arr[i]);
	}
	insertionSort(arr, n);
	printf("\nArray after sorting: \n");
	for(i=0;i<n;i++) {
		printf("%d, ", arr[i]);
	}
	return 0;
}

// Space Complexity of InsertionSort is O(1), as it is an inplace algorithm which means it do not need extra space for 
// executing the algorithm. Worst case time complexity is O(n^2) and best case time complexity is  Ω(n).
