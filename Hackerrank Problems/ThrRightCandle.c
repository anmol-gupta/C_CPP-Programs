#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j,temp;
    scanf("%d", &n);
    int arr[1000];
    for(i=0;i<n;i++) {
        scanf("%d ", &arr[i]);
    }
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("%d", arr[1]);
    return 0;
}
