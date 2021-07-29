#include<stdio.h>
#include<string.h>
void upperToLowerCaseString()
{
   char s1[20];
    
    int i;
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
int main()
{
   upperToLowerCaseString();
         return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc upperToLowerCaseString.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the Uppercase string = SACHIN

The Uppercase to lowercase string = sachin
PS F:\PROFOUND\PRACTICAL\c>
*/