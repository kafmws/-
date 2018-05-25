#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int main() {
		char str[20],c=0,i=0;
	while (i<49) {
		c = getch();
		if (c != 8&&c!='\r') {
			str[i++] = c;
			printf("*");
		} else if (c == 8&&i>0) {
			printf("\b \b");
			i--;
		}else if(c=='\r'){
			break;
		}
	}
	str[i] = '\0';
	printf("\n%s",str);
	return 0;
}
