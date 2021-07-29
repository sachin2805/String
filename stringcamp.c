#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[20];
    int v;
    printf("\nEnter the first string = ");
    scanf("%s",&s1);
    printf("\nEnter the second string = ");
    scanf("%s",&s2);
    v=strcmp(s1,s2);
    if(v==0)
    printf("\nBoth string are equal ");
    else
    printf("\nBoth string not are equal ");
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc stringcamp.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the first string = sachin

Enter the second string = sachin

Both string are equal
PS F:\PROFOUND\PRACTICAL\c> gcc stringcamp.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the first string = akash

Enter the second string = sachin

Both string not are equal
PS F:\PROFOUND\PRACTICAL\c>
*/