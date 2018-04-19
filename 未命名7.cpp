#include<stdio.h>

int main(){
	for(i=0,j=min-1; i<(min-1)/2&&j>(min-1)/2; i++,j--) {//奇数最小回文串长度的判断 
					if(str[i]!=str[j]) {
						flag=0;
						break;
					}
				}
				if(flag==0) {
					break;
				}
				min/=2; 
	return 0;
}
