#include <stdio.h>
#include <stdlib.h>
char* lastword(char*, int);
int main()
{
char string[30], *pointer;
printf("Input a string\n");
gets(string);
int len;
for (len = 0; string[len] != '\0'; len++);
pointer = lastword(string,len);
printf("last word is \"%s\"\n", pointer);
free(pointer);

return 0;
}
char *lastword(char *string,int length)
{
	char *pointer;
	int position;
	int i, j;
	pointer = (char *)malloc(20 * sizeof(char *));
	for( i = 0;string[i] != '\0';i++){
		if(string[i]==' '){
			position=i;
		}
	}
	for (i = position, j = 0; i < length; i++, j++){
		pointer[j] = string[i];
	}
	pointer[length - position] = '\0';

	return pointer;
}


