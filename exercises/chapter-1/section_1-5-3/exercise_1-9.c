#include <stdio.h>

int main()
{
	int c1,c2;
	while ((c1=getchar()) != EOF) {
		if (c1 == ' ') {
			putchar(c1);
			while ((c2=getchar()) == ' ')
				;
			putchar(c2);
		} else {
			putchar(c1);
		}
	}
}

