#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	int i,j,k,z,a,b,cnt,hate,n=1,x=0,y=0,book[2][1000005]= {0};
	char *num;
	num=(char *)malloc(sizeof(char)*100);
	for(i=125; i<=1000000; i++) {
		sprintf(num,"%d",i);
		if(strstr(num,"521")!=NULL) {
			book[0][i]=book[0][i-1]+1;
			book[1][i]=book[1][i-1]+1;
		} else if(strchr(num,'5')&&strchr(num,'2')&&strchr(num,'1')) {
			book[0][i]=book[0][i-1]+1;
			book[1][i]=book[1][i-1]; 
		} else {
			book[0][i]=book[0][i-1];
			book[1][i]=book[1][i-1];
		}
	}
	while(scanf("%d %d",&a,&b)!=EOF) {
		printf("Case %d:%d %d\n",n,book[0][b]-book[0][a-1],book[1][b]-book[1][a-1]);
		n++;
	}
	return 0;
}

