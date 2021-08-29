#include <stdio.h>

/* copy input to output */
int main() {
	int c;
	while ((c=getchar()) != EOF) {
		if (c=='\t') {
			printf("\\t");
		} else if (c=='\b') {
			printf("\\b");
		} else if (c=='\\') {
			printf("\\\\");
		} else if (c=='\n') {
			/* extra: show new line characters too, but also print them */
			printf("\\n\n");
		} else {
			putchar(c);
		}
	}
}
