#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k,count=0,sum=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[100000];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i =0 ;i<n;i++){
        sum =a[i];
        if(sum == k)
            count++;
        else{
            for(int j=i+1;j<n;j++){
                if(sum+a[j]>k){
                    break;    
                }
                else{
                    sum += a[j];
                    if(sum == k)
                        count++;
                }
            }
        }
    }
    printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
