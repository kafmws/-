#include<stdio.h>

long long dfs(int num[],int r,int cnt) {
	int i;
	for(i=0;i<sizeof(num)/sizeof(int);i++){
		if(num[i]==0&&r>0){
			if(r==0)cnt++;
			num[i]=1;
			cnt+=dfs(num,r-1,cnt);
			num[i]=0;
			if(r==0){
				for(int j=sizeof(num)/sizeof(int)-1;j>=0;j--){
					printf("%d");
				}printf("\n");
			}
		}
	}
	return cnt;
}
int main() {
	int n,r,i,cnt;
	while(scanf("%d %d",&n,&r)!=EOF) {
		cnt=0;
		int num[n]= {0};
		printf("%lld",dfs(num,r,0));
	}

	return 0;
}
