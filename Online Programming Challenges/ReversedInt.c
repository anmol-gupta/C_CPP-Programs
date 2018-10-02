/* LeetCode Problem - Reverse Integer*/
/* Given a 32-bit signed integer, reverse digits of an integer.*/

/*
NOTE - Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: 
[−2^31,  2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer 
overflows.
*/

#include<math.h>

int reverse(int x) {
    int temp = x, reversed, r;
    if(temp >= -pow(2,31) && temp <= (pow(2,31)-1)) {
        while(temp!=0) {
            r = temp%10;
            reversed = reversed*10 + r;
            temp /= 10;
        }
    } else {
        return 0;
    }
    return reversed;
}
