//Find the missing number from the array of which contains n-1 numbers from range 1 to n

//Code1 - If there is no chance of integer overflow after the summation.

#include<bits/stdc++.h>

int main() {
    int a[] = {5,1,3,6,2};
    int n = sizeof(a)/sizeof(a[0]);
    int range = n+1;
    int sum = (range*(range+1))/2;
    for(int i=0;i<n;i++) {
        sum -= a[i];
    }
    printf("Missing number: %d", sum);
    return 0;
}

//Code2 - If there is chance of integer overflow after the summation.

#include<bits/stdc++.h>

int main() {
    int a[] = {5,1,3,6,2};
    int X=0,Y=0;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++) {
        X ^= a[i];
    }
    for(int i=1;i<=n+1;i++) {
        Y ^= i;
    }
    printf("Missing number: %d", X^Y);
    return 0;
}
