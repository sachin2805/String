#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50];
    int i,j,k;
    printf("\nEnter the first string = ");
    // gets(s1);
    scanf("%s",&s1);
    printf("\nEnter the second string = ");
    // gets(s2);
    scanf("%s",&s2);
    //finding lenght
    for(k=0;s2[k]!='\0';k++);
        
        for(i=0,j=0;s1[i]!='\0' && s2[j]!='\0';i++)
        {
            if(s1[i]==s2[j])
            {
                j++;
            }
            else
            j==0;
        }
    
    if(j>0)
    printf("\nSubstring found at position %d",i-j+1);
    else
    printf("\nsubstring is not found ");

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\String> gcc substring.c
PS F:\PROFOUND\PRACTICAL\c\String> ./a.exe        

Enter the first string = sachinpowar

Enter the second string = npo

Substring found at position 6
PS F:\PROFOUND\PRACTICAL\c\String>
*/