#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int main() {
	int i;
	char str[25],c;
	for(i=0;i<25;i++){
		c=getch();
		if(c!='\r'&&c!=8){
			str[i]=c;
		}
		else if(c==8){
			printf("\b \b");
			continue;
		}else{
			break;
		}
		printf("*");
	}
	printf("\n");
	str[i]='\0';
	for(i=0;i<strlen(str);i++){
		printf("%c",str[i]);
	}
	return 0;
}
