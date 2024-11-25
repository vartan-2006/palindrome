#include <stdio.h>
#include <string.h>
char ori[20],rev[20];
char revs();
int ct1=0,ct2=0;
int main()
{
    printf("Enter word:");
    scanf("%s",&ori);
    //printf("%d",strlen(ori));
    ct2=strlen(ori)-1;
    //printf("ct2 %d",ct2);
    revs();
    //printf("rev: %s\t ori : %s\n",rev,ori);
    if (strcmp(ori,rev)==0)
    {
        printf("Word is palindrome");
    }
    else
    {
        printf("Word is not palindrome");
    }
    return 0;
}
char revs()
{
    if (ct1==strlen(ori))
    {
        return 0;
    }
    //printf("Here");
    rev[ct1]=ori[ct2];
    //printf("%c\t%c",rev[ct1],ori[ct2]);
    ct1++;
    ct2--;
    revs();
}