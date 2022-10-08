#include <stdio.h>
#include <string.h>

int main()
{
    char ip[20];
    printf("Enter the IP address:\t");
    fgets(ip,20,stdin);
    ip[strlen(ip)-1]='\0';
    if(checkip(ip)) printf("Valid IP address");
    else printf("Not Valid");
    return 0;
}
int checkip(char str[])
{
    int i,x; char *a=strtok(str,".");
    for(x=0;x<=3;x++)
    {
    i=atoi(a);
    if(0<=i&&i<=255)
        a=strtok(NULL,".");
        else return 0;
    }
    return 1;




}
