#include <stdio.h>
#include <string.h>
int check(char str[]);
int main()
{
    char str[10][50]; int i,x; int temp[10]={0};
    printf("Enter the Emails: ");
    for(i=0;i<=9;i++)
        fgets(str[i],50,stdin);
        for(i=0;i<=9;i++)
        {
            x=check(str[i]);
            temp[i]=x;
        }
            printf("Valid Email are: \n");
        for(i=0;i<=9;i++)
            if(temp[i]!=0)
            printf("%s",str[i]);
}
int check(char str[])
{
      int i,count=0;
    for(i=0;str[i];i++)
        if(str[i]=='@') count++;
    return count;
}








