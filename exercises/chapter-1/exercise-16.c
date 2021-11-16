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
	while (size<lim-1 && (c=getchar())!='\n' && c!=EOF){
		s[size++]=c;
	}
	if (c != EOF){
		if (size<lim-1){ 			// we found '\n' before the array gets full
			s[size++]=c;
			s[size]='\0';
		} else {					// array filled before we find '\n'
			s[size]='\0';
			while ((c=getchar())!='\n') size++; 	// count the remaining characters that didn't make it to the array
			size++;									// the line feed 
		}
	} 
	return size;
}

// copy: copy ' from' into 'to'; assume 'to' is big enough
void copy(char to[], char from[])
{
	int i=0;

	while ((to[i] = from[i]) != '\0') i++;
}
