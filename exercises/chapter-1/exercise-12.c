#include <stdio.h>

int main ()
{
	int c;
	while ((c=getchar()) != EOF) {
		if (c==' ' || c=='\t' || c=='\n') {
			while ((c=getchar()) != EOF) {
				if (c!=' ' && c!='\t' && c!='\n')
					break;
			}
			putchar('\n');
			putchar(c);
		} else {
			putchar(c);
		}
	}
}
