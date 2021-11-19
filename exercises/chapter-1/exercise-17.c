#include <stdio.h>
#define MAXLINE 1000

// if line > MAXLINE, show only the first MAXLINE characters
int main()
{
	int c, count=0;
	char line[MAXLINE];
	while ((c=getchar()) != EOF){
		if (c != '\n' && count < MAXLINE) line[count++] = c;
		else  {
			if ( count > 80 ){
				line[count] = '\0';
				printf("%s\n", line);
			}
			count=0;
		}
	}
}
