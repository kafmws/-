#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int T,l,d,r;
	double v,num;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d %d",&l,&d,&r);
		v=sqrt(r*r-(d*1.0/2)*(d*1.0/2));
		if(2*r>d){
			num=l/2.0/v;
			if(num!=(int)num){
				num++;
			}
			printf("%d\n",(int)num);
		}else{
			printf("impossible\n");
		}
		
	}
	return 0;
}
