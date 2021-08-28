#include <stdio.h>

int main() 
{
	int c;
	int count = 0;
	while ((c=getchar()) != EOF) {
		if ( c == '\n')
			count++;
	}
	printf("%d", count);

}
