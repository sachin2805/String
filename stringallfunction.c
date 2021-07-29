#include<stdio.h>
#include<string.h>
void lowerToUpperCaseString()
{
   char s1[20];
    int i;
    printf("\nLowercase string To Uppercase string \n");
    printf("\nEnter the Lowercase string = ");
    scanf("%s",&s1);
      for (i = 0; s1[i]!='\0'; i++)
       {
      if(s1[i] >= 'a' && s1[i] <= 'z')
      {
         s1[i] = s1[i] - 32;
      }
         }
         printf("\nThe Lowercase to Uppercase string = %s",s1);
}
void upperToLowerCaseString()
{
   char s1[20];
     int i;
      printf("\nUppercase string  To Lowercase string\n");
    printf("\nEnter the Uppercase string = ");
    scanf("%s",&s1);
      for (i = 0; s1[i]!='\0'; i++)
       {
      if(s1[i] >= 'A' && s1[i] <= 'Z')
      {
         s1[i] = s1[i] + 32 ;
      }
         }
         printf("\nThe Uppercase to lowercase string = %s",s1);
}
void concatination()
{
      char s1[20];
    char s2[20];
    int i, j;
    printf("\nFor concatation of two string \n");
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
}
void stringcampare()
{
      char s1[20];
    char s2[20];
    int v;
    printf("\nFor compare two string \n");
    printf("\nEnter the first string = ");
    scanf("%s",&s1);
    printf("\nEnter the second string = ");
    scanf("%s",&s2);
    v=strcmp(s1,s2);
    if(v==0)
    printf("\nBoth string are equal ");
    else
    printf("\nBoth string not are equal ");
}
void stringlength()
{
       char s1[20];
    int i;
    printf("\nFor find the length of string \n");
    printf("\nEnter the first string = ");
    scanf("%s",&s1);
    
	i = strlen(s1);
    printf("\nThe lenght of given string is = %d",i);

}
void stringreverce()
{
        char s1[20];
    int i;
    printf("\nFor reverce the string \n");
    printf("\nEnter the first string = ");
    scanf("%s",&s1);
     printf("\nReverce string is = %s",strrev(s1));

}
int main()
{
   lowerToUpperCaseString();
   upperToLowerCaseString();
   concatination();
   stringcampare();
    stringlength();
    stringreverce();

         return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\String> gcc stringallfunction.c
PS F:\PROFOUND\PRACTICAL\c\String> ./a.exe

Lowercase string To Uppercase string

Enter the Lowercase string = sachin

The Lowercase to Uppercase string = SACHIN
Uppercase string  To Lowercase string

Enter the Uppercase string = SACHIN

The Uppercase to lowercase string = sachin
For concatation of two string

Enter the first string = sachin

Enter the second string = Akash

Concating string is  = sachinAkash
For compare two string

Enter the first string = Sachin

Enter the second string = Sachin

Both string are equal
For find the length of string

Enter the first string = sachin

The lenght of given string is = 6
For reverce the string

Enter the first string = sachin

Reverce string is = nihcas
PS F:\PROFOUND\PRACTICAL\c\String>
*/