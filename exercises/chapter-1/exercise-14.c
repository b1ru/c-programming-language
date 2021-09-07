#include <stdio.h>
#define N 26

int main() 
{
	/* count[i] counts how many times the i-th letter in the alphabet 
	   appeared. */
	int count[N]; 
	for (int i=0; i<N; i++) count[i]=0;

	int c;
	while ((c=getchar()) != EOF) {
		if (c>='a' && c<='z') count[c-'a']++;
	}

	/* make the histogram */
	for (int i=0; i<N; i++){
		if (count[i] != 0) {
			printf("%c ", 'a' + i);
			for (int j=0; j<count[i]; j++) printf("-");
			printf("\n");
		}
	}
}
