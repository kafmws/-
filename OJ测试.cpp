#include<stdio.h>
#include<string.h>
int main() {
	char time,len,str[100],min=1,i,j,flag;
	scanf("%d",&time);
	while(time--) {
		scanf("%s",str);
		min=strlen(str);//判断是否为回文  //min-1 当前最后一个字符的下标
		while(min) {//
			flag=1;
			if(min<2) {
				min=1;
				break;
			}
			if(min%2==0) { //为偶数
				for(i=0,j=min-1; i<=min/2&&j>=min/2; i++,j--) {
					if(str[i]!=str[j]) {
						flag=0;
						break;
					}
				}
				if(flag==0) {
					break;
				}
				min/=2;
			} else { //为奇数
				for(i=0,j=min-1; i<(min-1)/2&&j>(min-1)/2; i++,j--) {
					if(str[i]!=str[j]) {
						flag=0;
						break;
					}
				}
				if(flag==0) {
					break;
				}
				min/=2;
			}
		}
		printf("%d\n",min);
	}
	return 0;
}

