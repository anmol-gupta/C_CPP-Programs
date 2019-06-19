/* Given an array all numbers are occuring even number of times except one number which is occuring odd number of times.
Find the number which occurs odd number of times. */

#include<bits/stdc++.h>

int main() {
    int a[] = {1,2,3,2,3,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    int X = 0;
    for(int i=0;i<n;i++) {
        X ^= a[i];
    }
    printf("Number occuring odd number of times: %d", X);
    return 0;
}
