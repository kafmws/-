#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main() {
	long long T,M,i,j,floor,time,t;
	scanf("%lld",&T);
	while(T--) {
		floor=0,time=0;
		char str[30],num[20];
		scanf("%lld",&M);
		for(i=0; i<M; i++) {
			scanf("%s",str);
			switch(str[0]) {
				case 'I':
					floor++;
					break;
				case 'S':
					j=0;
					scanf("%d",&t);
					t*=60;
					for(j=0;j<floor;j++){
						t/=20;
					}
					time+=t;
					break;
				case 'O':
					floor--;
					if(floor==0) {
						goto re;
					}
					break;
			}
		}
re:
		printf("%lld\n",time);
	}
	return 0;
}
