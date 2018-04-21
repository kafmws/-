#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n,k,cnt;
	while(scanf("%d %d",&n,&k)!=EOF) {
		cnt=1;
		if(k>=n) {
			cnt=2;
		} else {
			for(cnt; cnt*k<2*n; cnt++) {

			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
