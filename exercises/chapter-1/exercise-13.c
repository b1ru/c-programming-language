#include <stdio.h>
#define N 30

int main()
{
	int count[N];   	/* count[i] counts the times a word of length i
						   appeared */

	for (int i=0; i<N; i++) {
		count[i] = 0;
	}

	int c;
	int prev=getchar(); /* the previous character */
	int length=0; 		/* the length of the current word */

	if (prev != ' ' && prev != '\t' && prev != '\n') length++;

	while ((c=getchar()) != EOF) {
		if ( c==' ' || c=='\t' || c=='\n') {
			if (prev != ' ' && prev != '\t' && prev != '\n') {
				/* word ended */
				count[length]++;
				length=0;
			}
		} else {
			length++;	
		}
		prev=c;
	}

	for (int i=0; i<N; i++) {
		if (count[i] != 0 ) {
			printf("%d ",i);
			for (int j=0; j<count[i]; j++) {
				printf("-");
			}
			printf("\n");
		}
	}
}
