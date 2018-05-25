#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int x,y,cnt=0;
	scanf("%d %d",&x,&y);
	int i,j;
	for(i=x; i<=y+1; i+=x) {
		if(y%i==0)
			for(j=x; j<=y+1; j+=x) {
				if(x*y==i*j&&i%j!=0&&j%i!=0) {
					//printf("%d %d\n",i,j);
					cnt++;
				}
			}
	}
	printf("%d",cnt);
	return 0;
}
