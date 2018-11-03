#include<stdio.h>
int main()
{
long long int t,i;
char s[155];
scanf("%lld",&t);
while(t--)
{
long long int csuvojit=0,csuvo=0;
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O'&&s[i+4]=='J'&&s[i+5]=='I'&&s[i+6]=='T')
csuvojit++;
else if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O')
csuvo++;
}
printf("SUVO = %lld",csuvo);
printf(", ");
printf("SUVOJIT = %lld\n",csuvojit);
}
return 0;
}
