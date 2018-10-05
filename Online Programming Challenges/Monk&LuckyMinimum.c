/*
Problem - HackerEarth: Monk and Lucky Minimum
*/

#include<stdio.h>
int main() {
    int t, min = 1000000000, n, count, i;
    scanf("%d", &t);
    while(t--) {
        scanf("%d\n",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d ",&arr[i]);
            if(arr[i]<min){
                min = arr[i];
                count  = 0;
            }
            if(arr[i]==min) {
                count++;
            }
        }
        if(count%2!=0){
            printf("Lucky\n");
        } else {
            printf("Unlucky\n");
        }
        count = 0, min = 1000000000;
    }
    return 0;
}
