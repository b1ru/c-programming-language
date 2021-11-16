#include <stdio.h>
#define MAXLINE 1000 			// maximum input line size

int _getline(char line[], int maxline);
void copy(char to[], char from[]);
void test_getline();

// print longest input line
int main()
{
	int len;					// current line length
	int max;					// maximum length seen so far
	char line[MAXLINE];			// current input line
	char longest[MAXLINE];		// longest line saved here

	max = 0;
	while ((len = _getline(line, MAXLINE)) > 0){
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) 	// there was a line
		printf("%d: %s", max, longest);
	return 0;
}

// _getline: read a line into s, return length
int _getline(char s[], int lim)
{
	int c, size=0;
	while ((c=getchar())!='\n' && c!=EOF){
		if (size<lim-1) s[size]=c;
		size++;
	}
	if (size<lim-1) s[size]='\n'; 	// the line feed will be included in the array if there is space
	if (c != EOF) size++; 			// the line feed must be counted regardless if it makes it on the array
	return size;
}

// copy: copy ' from' into 'to'; assume 'to' is big enough
void copy(char to[], char from[])
{
	int i=0;

	while ((to[i] = from[i]) != '\0') i++;
}
