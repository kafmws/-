#include<stdio.h>
#include<string.h>
#include<math.h>
#define PI 3.1415926
int main() {
	long i,j,n;
	while(scanf("%ld",&n)!=EOF) {
		int num[10005]={0};
		if(n==0){
			printf("%d\n",0);
			continue;
		}
		i=0;
		while(n){
			num[i++]=n%2;
			n/=2;
		}
		for(i=i-1;i>=0;i--){
			printf("%d",num[i]);
		}
		printf("\n");
	}
	return 0;
}
