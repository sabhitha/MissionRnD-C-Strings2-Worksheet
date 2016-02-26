#include <stdio.h>
#include <stdlib.h>

char* substring(char*, int, int);

int main()
{
	char *string = " ", *pointer;
	int position, length;

	printf("Input a string\n");
	gets(string);

	printf("Enter the position and length of substring\n");
	scanf("%d%d", &position, &length);

	pointer = substring(string, position, length);

	printf("Required substring is \"%s\"\n", pointer);

	free(pointer);

	return 0;
}

char *substring(char *string, int position, int length)
{
	char *pointer;
	//int c;
	int i, j;
	pointer = malloc(length + 1);
	for (i = position, j = 0; i <= length; i++, j++){
		pointer[j] = string[i];
	}
	pointer[length - position + 1] = '\0';

	return pointer;
}

