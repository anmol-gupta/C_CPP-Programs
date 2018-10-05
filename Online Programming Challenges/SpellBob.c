/*
Problem - CodeChef: Spell Bob
*/


#include<stdio.h>
int main() {
	int t, i;
	char up[3], down[3];
	scanf("%d", &t);
	if(t<1 && t>20000){
		return 0;
	}
	while(t--){
		scanf("%s",up);
		scanf("%s",down);
		for(i=0;i<3;i++) {
			if((up[0]=='b' || down[0]=='b') && (up[1]=='o' || down[1]=='o') && (up[2]=='b' || down[2]=='b')){
				printf("yes\n");
				break;
			}
			else if ((up[0]=='b' || down[0]=='b') && (up[1]=='b' || down[1]=='b') && (up[2]=='o' || down[2]=='o')){
				printf("yes\n");
				break;
			}
			else if ((up[0]=='o' || down[0]=='o') && (up[1]=='b' || down[1]=='b') && (up[2]=='b' || down[2]=='b')){
				printf("yes\n");
				break;
			} else {
				printf("no\n");
				break;
			}  
		}
	}
	return 0;
}
