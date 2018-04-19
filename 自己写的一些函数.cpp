#include<stdio.h>
#include<string.h>

void itoas(int n,char *num) {//dec itoa    itoa is not standard function
	int i,t=0;
	char *re;
	re=(char *)malloc(sizeof(char)*100);
	while(n!=0) {
		re[t++]=n%10+'0';
		n/=10;
	}
	re[t]='\0';
	for(i=0; i<t; i++) {
		num[i]=re[t-i-1];
	}
	free(re);
}
int main(){
	
	return 0;
}
