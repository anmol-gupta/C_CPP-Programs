/*
Problem - CodeChef : Chef and polygonCakes
*/


#include<stdio.h>
int gcd(int x, int y) {
	if(x==0){
		return y;
	} else {
		return gcd(y%x,x);
	}
}
int main() {
	int t;
	scanf("%d", &t);
	int N, A, K, Z, g, i;
	for(i=0;i<t;i++) {
	scanf("%d %d %d", &N, &A, &K);
	K=A*N*(N-1)+((K-1)*(180*(N-2)-(N*A))*2);
	Z=N*(N-1);
	int g = gcd(K,Z);
	K/=g;
	Z/=g;
	printf("%d %d\n", K, Z);
	}
	return 0;
}
