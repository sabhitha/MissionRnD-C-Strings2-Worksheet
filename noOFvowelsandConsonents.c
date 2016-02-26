#include<stdio.h>
#include<stdlib.h>
void main()
{
    char str[50];
	int length;
    int i,consonants=0,vowels=0,ch;
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
	for (length = 0; str[length] != '\0';length++)
    for(i=0;i<length;i++)
    {
         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
         {
           vowels++;
		 

         }
         else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
         {
            consonants++;
			
         }
        
    }
    printf("vowels= %d\n",vowels);
    printf("cons= %d\n",consonants);
}
