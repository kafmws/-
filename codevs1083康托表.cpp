#include<stdio.h>
#include<string.h>

//int add(int n) {
//	int i,sum=0;
//	for(i=1; i<n+1; i++) {
//		sum+=i;
//	}
//	return sum;
//}
//int main() {
//	int n,i,j,sum;
//	scanf("%d",&n);
//	for(i=1;; i++) {
//		if(add(i-1)<n&&n<=add(i)) {
//			break;
//		}
//	}//printf("%d   ",i);
//	int a,b;
//	n=n-add(i-1)-1;
//	if(i%2){//奇数行 
//		a=i,b=1;
//		while(n!=0) {
//			a--;
//			b++;
//			n--;
//		}}else{
//			a=1;b=i;
//			while(n!=0) {
//			a++;
//			b--;
//			n--;
//		}
//		}
//	  printf("%d/%d",a,b);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int n,i=1,sum=0;
	scanf("%d",&n);
	for(i=1;; i++) {
		sum+=i;
		if(sum>=n) {
			sum-=i;//n-sum-1=应该再数几个 
			break;
		}
	}//i  偶  向上，i  奇  向下
	if(i%2){//奇 
		printf("%d/%d",i-n+sum+1,n-sum);
	} else{
		printf("%d/%d",n-sum,i-n+sum+1);
	}
	return 0;
}
