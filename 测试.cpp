#include<stdio.h>
main() {
	int n,i,t;
	scanf("%d",&t);
	while(t--) {
		int s=0;
		scanf("%d",&n);
		for(i=1; (i+1)*(i+1)<=n+1; i++) {
			if((n+1)%(i+1)==0)
				s++;
		}
		printf("%d\n",s);
	}
}
