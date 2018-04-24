#include<stdio.h>

long long dfs(int num[],int r){
	
	return
}
int main(){
	int n,r,i,cnt;
	while(scanf("%d %d",&n,&r)!=EOF){
		cnt=1;
		int num[n];
		for(i=0;i<n;i++){
			num[i]=cnt++;
		}
		printf("%lld",dfs(num,r));
	} 
	
	return 0;
}
