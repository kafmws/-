#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int main() {
	int i;
	char str[25],c,flag=1;
	for(i=-1; i<25;) {
		c=getch();
		if(c!='\r'&&c!=8) {
			if(flag) {
				flag=0;
				i=0;
			}
			str[i++]=c;
		} else if(c==8) {
			if(i>=0) {
				if(i>0) {
					i--;
				}
				printf("\b \b");
				continue;
			} else {
				continue;
			}
		} else {
			break;
		}
		printf("*");
	}
	if(i==-1)
		str[0]='\0';
	str[i]='\0';
	printf("\n");
	puts(str);
	return 0;
}
