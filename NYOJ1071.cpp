#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int a,b;
	while(~scanf("%d %d",&a,&b)) {
		if(!a||!b) {
			printf("Signs can't be sure\n");
		} else if(!(a+fabs(a))) {//  -a
			if((b+fabs(b))) {    //b
				printf("Signs are opposite\n");
			}
			if(!(b+fabs(b))) { //    -b
				printf("Signs are not opposot\n");
			}
		} else {//  a
			if((b+fabs(b))) {//   b
				printf("Signs are not opposot\n");
			}
			if(!(b+fabs(b))) { //     -b
				printf("Signs are opposite\n");
			}
		}
	}
	return 0;
}
