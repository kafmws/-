#include <stdio.h>
#include <string.h>
//num[0]сп©с 
int main() {
	int i,t,n,m;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&m);
		int num[m+1];
		num[1]=0,num[2]=1,num[3]=2;
		for(i=4;i<=m;i++){
			num[i]=num[i-1]+num[i-2];
		}
		printf("%d\n",num[m]);
	}
	return 0;
}

