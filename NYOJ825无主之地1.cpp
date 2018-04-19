#include<stdio.h>

int main(){
	int m,n,i,area[105]={0},cnt=0,num[105]={0},flag;
	scanf("%d %d",&m,&n);
	while(m&&n){
		flag=0;
		num[m]+=n;
		for(i=0;i<cnt+1;i++){
			if(area[i]==m){
				flag=1;
			}
		}
		if(flag==0){
			area[cnt++]=m;
		}
		scanf("%d %d",&m,&n);
	}
	for(i=0;i<cnt;i++){
		printf("%d %d\n",area[i],num[area[i]]);
	}
	return 0;
}
