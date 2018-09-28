#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int partition(int arr[], int p, int r) {	
	int i, j;
	int pivot = arr[r];
	for(j=p;j<r-1;j++) {
		if(arr[j] < pivot) {
			i = i+1;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[r]);
	return i+1;
}

void quickSort(int arr[], int p, int r) {
	while(p<r){
		int partitionIndex = partition(arr, p, r);
		quickSort(arr, p, partitionIndex-1);
		quickSort(arr, partitionIndex+1, r);
	}
}

int main() {
	int arr[5] = {5,4,3,2,1};
	int i, n;
	/*printf("Enter range of an array: \n");
	scanf("%d", &n);
	printf("Enter elements of an array:\n");
	for(i=0;i<n;i++) {
		scanf("%d", &arr[i]);
	}*/
	printf("\nArray before sorting: \n");
	for(i=0;i<n;i++) {
		printf("%d, ", arr[i]);
	}
	quickSort(arr, 0, n-1);
	printf("\nArray after sorting: \n");
	for(i=0;i<n;i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}
