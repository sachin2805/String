#include<stdio.h>
#include<string.h>
void lowerToUpperCaseString()
{
   char s1[20];
    
    int i;
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
int main()
{
   lowerToUpperCaseString();
    
         return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc lowerToUpperCaseString.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the Lowercase string = sachin

The Uppercase to lowercase string = SACHIN
PS F:\PROFOUND\PRACTICAL\c>
*/

