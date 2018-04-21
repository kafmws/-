#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>//开方运算慢于乘 

//for(i=1; i<=(int)sqrt(n+1)-1;i++) {
//			if((n-1)%i==0) {
//				cnt++;
//			}
//		}

int main() {
	long long  T,i,j,n,cnt;
	scanf("%lld",&T);
	while(T--) {
		cnt=0;
		scanf("%lld",&n);
		for(i=1; (i+1)*(i+1)-1<=n;i++) {
			if((n+1)%(i+1)==0) {
				cnt++;
			}

		}
		printf("%lld\n",cnt);
	}
	return 0;
}
