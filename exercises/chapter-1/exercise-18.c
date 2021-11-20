#include <stdio.h>
#define MAXLINE 1000

int get_trimmed_line(char[], int);

int main() {
	int count;
	char line[MAXLINE];
	while ((count = get_trimmed_line(line, MAXLINE)) > 0 ){
		if (count != 1) printf("%d: %s", count, line);
	}
}

int get_trimmed_line(char line[], int size) {
	int c, count=0;
			
	while ((c=getchar()) != '\n' && c != EOF && count < size-2) {
		line[count] = c;
		count++;
	}

	if (c == EOF) return 0;	
	if (c != '\n') { 
		printf("Max line size is %d.\n", MAXLINE);
		return -1;
	}

	// '\n' found
	if ( count == 0 ) { // blank line found
		line[0] = '\0';
		return 1; 
	}
	
	while (line[count-1] == ' ' || line[count-1] == '\t'){
		count--;
	}
	line[count++] = '\n';
	line[count] = '\0';
	return count;
}
