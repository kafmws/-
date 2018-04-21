#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main() {
	long long  i,n,num[100]={0};
	double judge;
	int j=0;
    num[0]=471;
	for(i=104487111;i<0x777777777777;i+=100){
		judge=pow(i,1/3);
		if(judge==(int)judge){
			num[j++]=judge;
		}if(j==100){
		break;
		}
	}
	int nn,shu;
	scanf("%d",&nn);
	while(nn--){
            scanf("%d",&shu);
        printf("%d\n",num[shu-1]);
	}

	return 0;
}
