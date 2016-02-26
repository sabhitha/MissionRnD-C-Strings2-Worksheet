#include<stdio.h>
#include<stdlib.h>
int countofwords(char*,int, char*,int);
void main(){
    char str[50],word[10];
    
	int lenOfStr = 0;
	int lenOfWord = 0;
    printf("Enter a string: \t");
    scanf("%s",str);
	for (lenOfStr = 0; str[lenOfStr] != '\0'; lenOfStr++);
    printf("Enter the word: \t");
    scanf("%s",word);
	for (lenOfWord = 0; word[lenOfWord] != '\0'; lenOfWord++);
	int count = countofwords(str, lenOfStr, word, lenOfWord);
	printf("count== %d",count);
}
int countofwords(char *str, int lenOfStr, char *ch1, int lenOfWord){
	int i, j, k = 1, count = 0;
	for (i = 0; i < lenOfStr - 1; i++){
		if (str[i] == ch1[0]){
			for (j = 1; j<lenOfWord; j++){
				if (str[i + j] == ch1[j]){
					k++;
				}
				else
					break;
			}
		}
		if (k == lenOfWord){
			count++;
			k = 1;
		}
		else
			k = 1;
	}
	return count;
}