#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    int i, j;
    printf("\nEnter the first string = ");
    scanf("%s",&s1);
    printf("\nEnter the second string = ");
    scanf("%s",&s2);
    
	i = strlen(s1);
	for (j = 0; s2[j] != '\0'; i++, j++) {
		s1[i] = s2[j];
	}
	s1[i] = '\0';
      printf("\nConcating string is  = %s",s1);
   
   return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc concatstring.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the first string = Sachin

Enter the second string = Akash

Concating string is  = SachinAkash
PS F:\PROFOUND\PRACTICAL\c>
*/