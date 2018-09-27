#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int p, int q, int r) {
	int i, j, k, n1, n2;
	n1 = q-p+1;
	n2 = r-q;
	int L[n1], R[n2];
	for(i=0;i<n1;i++) {
		L[i] = arr[p+i];
	}
	for(j=0;j<n2;j++) {
		R[j] = arr[q+1+j];
	}
	i = 0;
	j = 0;
	k = p;
	while(i<n1 && j<n2) {
		if(L[i] <= R[j]) {
			arr[k] = L[i++];
		} 
		else {
			arr[k] = R[j++];
		}
		k++;
	}
	while(i<n1) {
		arr[k++] = L[i++];
	}
	while(j<n2) {
		arr[k++] = R[j++];
	}
}

void mergeSort(int arr[], int l, int r) {
	if(l<r) {
		int m = (l+(r-1))/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main() {
	int n, arr[100], i;
	printf("Enter range of an array:\n");
	scanf("%d", &n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++) {
		printf("Enter [%d] element: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Array before Merge Sort: \n");
	for(i=0;i<n;i++) {
		printf("%d\t", arr[i]);
	}
	mergeSort(arr, 0, n-1);
	printf("\nArray after Merge Sort\n");
	for(i=0;i<n;i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}
