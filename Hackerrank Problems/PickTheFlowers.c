#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char s[100];
    int i=0,count[26]={0},max,temp=0;
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        count[s[i]-97]++;
    }
    max=count[0];
    for(i=1;i<26;i++)
    {
        if(max<count[i])
        {
            max=count[i];
            temp=i;
        }
        else{
            continue;
        }
    }
    printf("%c",temp+97);
    return 0;
}
