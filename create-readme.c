#include <stdio.h>
#define CHAPTERS 8

int main()
{
	int exercises[] = {-1, 24, 10, 6, 13, 20, 6, 9, 8};
	for (int chapter = 1; chapter <= CHAPTERS; chapter++) {
		printf("== Chapter %d\n", chapter);
		for (int exercise = 1; exercise <= exercises[chapter]; exercise++) {
			printf("* [ ] Exercise %d.%d\n", chapter, exercise);
		}
		printf("\n");
	}
}
