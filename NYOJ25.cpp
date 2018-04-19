#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
	int n=1;
	char tone[3],hl[8],c;
	while(scanf("%s %s",tone,hl)!=EOF) {
		switch(tone[1]) {
			case '#':
				switch(tone[0]) {
					case 'A':
						printf("Case %d: Bb %s\n",n++,hl);
						break;
					case 'C':
						if(hl[1]=='a') {
							printf("Case %d: Db %s\n",n++,hl);
						} else {
							printf("Case %d: UNIQUE\n",n++);
						}
						break;
					case 'D':
						printf("Case %d: Eb %s\n",n++,hl);
						break;
					case 'G':
						if(hl[1]=='a'){printf("Case %d: Ab %s\n",n++,hl);
						}else{
							printf("Case %d: UNIQUE\n",n++);
						}
						break;
					default:
						printf("Case %d: UNIQUE\n",n++);
						break;
				}
				break;
			case 'b':
				switch(tone[0]) {
					case 'A':
						if(hl[1]=='i') {
							printf("Case %d: G# %s\n",n++,hl);
						} else {
							printf("Case %d: UNIQUE\n",n++);
						}
						break;
					case 'D':
						if(hl[1]=='i') {
							printf("Case %d: C# %s\n",n++,hl);
						} else {
							printf("Case %d: UNIQUE\n",n++);
						}
						break;
					case 'G':
						printf("Case %d: F# %s\n",n++,hl);
						break;
					default:
						printf("Case %d: UNIQUE\n",n++);
						break;
				}
				break;
			default:
				printf("Case %d: UNIQUE\n",n++);
				break;
		}
	}
	return 0;
}
