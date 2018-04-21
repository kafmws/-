#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int t,i,j,a,b,flag;
	char num[8];
	scanf("%d",&t);
	while(t--){
            scanf("%d %d",&a,&b);
            for(i=a;i<=b;i++){
                flag=1;
                sprintf(num,"%06d",i);
                for(j=0;j<5;j++){
                    if((num[j+1]-'0')-(num[j]-'0')>4){
                        flag=0;
                        break;
                    }
                    if(j<=3&&num[j]==num[j+1]&&num[j]==num[j+2]){
                        flag=0;break;
                    }
                }
                if(flag){
                    puts(num);
                }
            }
	}

	return 0;
}
