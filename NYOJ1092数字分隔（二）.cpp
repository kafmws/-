#include<stdio.h>
#include<string.h>//sign=1  +;     sign=-1  -;
int main() {
	char num[110];
	int i,j,k,book,flag=0,sign,t;
	while(scanf("%s",num)!=EOF) {
		char re[150],str[112];
		re[0]='\0',str[0]='\0';
		book=-1,sign=1,t=0;
		if(num[0]=='-') {
			sign=-1;
		}//判断符号
		for(i=0; i<strlen(num); i++) {
			if(num[i]=='-') {
				continue;
			}
			if(num[i]!='0') {
				break;
			}
		}//得到第一个不为0的数字的下标
		for(j=0; i<=strlen(num); j++) {
			num[j]=num[i++];
			if(num[j]=='.') { //判断有没有小数点
				book=j;
			}
		}//舍去开头的0
		//没有.加上.；四舍五入，判断进位；插入逗号 ；
		if(book==-1) { //没有小数点num[strlen(num)]='\0'
			book=strlen(num);
			num[strlen(num)+1]='0';
			num[strlen(num)+2]='0';
			num[strlen(num)+3]='\0';
			num[strlen(num)]='.';
		} else if(strlen(num)-book<=2) { //小数点后位数不足
			int now=strlen(num),k;
			for(i=now,k=1; k<=3-now+book; k++) {
				num[i++]='0';
			}
			num[i]='\0';
		}
//		//四舍五入
		if(num[book+3]>='5'&&num[book+3]<='9') {
			num[book+3]='\0',t=1;//t表示进位
			for(i=book+2; i>=0; i--) {
				if(num[i]=='.') {
					continue;
				}
				if(t) {
					char c=num[i];
					num[i]=(num[i]-'0'+t)%10+'0';
					if(i!=0)t=(c-'0'+t)/10;
				} else {
					break;
				}
			}
		}//t表示进位
		if(t) {
			book+=1;
			str[0]=t+'0';
			str[1]='\0';
		} else {
			str[0]='\0';
		}
		strcat(str,num);
		//分隔
		if(book%3==0) {
			j=book+(book)/3-1;
		} else {
			j=book+(book)/3;
		}re[j]='\0';
		for(i=book-1,j=j-1,k=1;i>=0;i--,k++){
			re[j--]=str[i];
			if(k==3){
				k=0;
				re[j--]=',';
			}
		}
		for(i=book,j=strlen(re);i<=book+2;i++){
			re[j++]=str[i];
		}
		re[j]='\0';
		//输出
		if(sign==-1) {
			printf("(");
		}
		if(re[0]=='.') {
			printf("0");
		}
		for(i=0; i<strlen(re); i++) {
			printf("%c",re[i]);
		}
		if(sign==-1) {
			printf(")");
		}
		printf("\n");
	}
	return 0;
}
