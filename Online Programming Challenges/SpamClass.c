/*
Problem - CodeChef: Spam Classification Using Neural Net
*/


#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,min,max,limit,out1,out2;
		scanf("%d%d%d",&n,&min,&max);
		limit=(max-min)+1;
		int w[n],b[n];
		for(int i=0;i<n;i++)
		scanf("%d%d",&w[i],&b[i]);
		out1=min;
		out2=out1+1;
		for(int i=0;i<n;i++){
			out1=(out1*w[i]+b[i]);
			out2=(out2*w[i]+b[i]);
		}
		if((out1%2!=0)&&(out2%2!=0))
		printf("0 %d\n",limit);
		else if((out1%2==0)&&(out2%2==0))
		printf("%d 0\n",limit);
		else if(limit%2==0)
		printf("%d %d\n",(limit/2),(limit/2));
		else
		{
			if(out1%2!=0)
			printf("%d %d\n",(limit/2),((limit/2)+1));
			else
			printf("%d %d\n",((limit/2)+1),(limit/2));
		}
	}
}
