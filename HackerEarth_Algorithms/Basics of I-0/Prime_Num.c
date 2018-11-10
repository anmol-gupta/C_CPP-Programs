#include<stdio.h>
int main()
{
int i, prime, u, n;
scanf("%d",&u);
for(n=2; n<u; n++)
{
prime = 1;
for(i=2; i<n; i++)
{
if(n%i == 0)
{
prime = 0; 
break;
}
}
if(prime)
printf("%d ",n);
}
return 0;
}
