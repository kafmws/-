#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int i,j,cnt0,book,sign,x,k,asdf;//asdf
	double obj,flag;
	char num[105];
	while(scanf("%[^\n]%*c",num)!=EOF) {
		char re[400]= {0};
		if((num[0]=='0'&&num[1]=='\0')||(num[0]=='0'&&num[1]=='.'&&num[2]=='0')||num[0]=='0'&&num[1]=='.'&&num[2]=='0'&&num[3]=='0') {
			printf("%.2f\n",0.00);
		} else {
			sign=1;
			cnt0=0;
			book=-1;
			for(i=0; i<strlen(num); i++) {
				if(num[i]=='0'||num[i]=='-') {
					cnt0++;
				} else {
					break;
				}
			}
			for(i=0,j=cnt0; j<=strlen(num); i++) { //copy '\0'
				if(num[i]=='-') {
					sign=-1;
					num[0]='0';
					i--;
					continue;
				}
				num[i]=num[j++];
			}
//		for(i=0;i<strlen(num);i++){
//			printf("%c",num[i]);
//		}printf("测试\n");
			obj=atof(num);
//四舍五入
			if(obj*100-(int)(obj*100)>=0.5) {
				obj+=0.01;
			}
			sprintf(num,"%lf",obj);
			for(i=0; i<strlen(num); i++) {
				if(num[i]=='.') {//book .
					book=i;
					break;
				}
			}
			if(book==-1) {
				book=strlen(num);
				num[strlen(num)+1]='\0';
				num[strlen(num)]='.';
			}
			if(book%3==0) {
				j=book+(book)/3-1;
			} else {
				j=book+(book)/3;
			}
			for(i=book-1,j=j-1,k=1; i>=0; i--,k++) {
				re[j--]=num[i];
				if(i<book)
					if(k==3) {
						k=0;
						re[j--]=',';

					}
			}
			for(i=book,j=strlen(re); i<=book+2; i++) {
				re[j++]=num[i];
			}
			re[j]='\0';
//		for(i=0; i<strlen(re); i++) {
//			printf("%c",re[i]);
//		}
//		printf("测试\n");
			if(sign==-1) {
				printf("(");
			}
			for(i=0; i<strlen(re); i++) {
				printf("%c",re[i]);
			}
			if(sign==-1) {
				printf(")");
			}
			printf("\n");
		}
	}
	return 0;
}
package 南阳;

import java.io.BufferedInputStream;
import java.text.DecimalFormat;
import java.util.Scanner;

///**
//* DecimalFormat类的使用
//*/
//public class _1092 {
//public static void main(String[] args) {
//Scanner in = new Scanner(new BufferedInputStream(System.in));
///**
//* #:代表数字，若没有时，不显示
//* 0:代表数字，若没有时，显示为0
//* ;:正负数的模式
//* .:小数点
//*/
//DecimalFormat format = new DecimalFormat("#,##0.00;(#,##0.00)");
//while (in.hasNextDouble()) {
//System.out.println(format.format(in.nextBigDecimal()));
//}
//System.out.close();
//in.close();
//}
//}
