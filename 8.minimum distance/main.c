#include <stdio.h>
#include <string.h>

void takeinput(char str[]);
int cmp(char str1[][10],char str2[]);
int main()
{
    int x,y,i;
    char givstr[5][10]={"how","do", "you", "do" , "this" };
    char word1[10],word2[10];
    printf("Given string is:\t");
    for(i=0;i<5;i++)
    printf("%s ",givstr[i]);
    printf("\nEnter word 1: ");takeinput(word1);
    printf("Enter word 2: ");takeinput(word2);
    x=cmp(givstr,word1);
    y=cmp(givstr,word2);
    if(x>=0&&y>=0)printf("Minimum distance between two word:\t%d",abs(x-y)-1);
    return 0;
}
void takeinput(char str[])
{
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
}
int cmp(char str1[][10],char str2[])
{
    int i;
        for(i=0;i<5;i++)
        if(strcmp(str1[i],str2)==0) return i;
    return -1;
}
