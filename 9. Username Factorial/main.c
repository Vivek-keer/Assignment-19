#include <stdio.h>
#include <string.h>

int main()
{
    char temp[20];
    int i;
    printf("Enter the username: ");
    fgets(temp,20,stdin);
    for(i=0;temp[i];i++);
    temp[i-1]='\0';
    i=search(temp);
    switch(i)
    {
        case 0: printf("\nInvalid username!\n");break;
        case 1:
            system("cls");
            printf("WELCOME!\n");

            printf("Enter the number: ");
            scanf("%d",&i);
            printf("\n Factorial of given number: %d",fact(i));
    }
    return 0;
}
int search(char temp[])
{
    int i;
    char str[10][20]={"Katsuki Bakugo","Kata Draken","Saitama" ,"Eren yeager","Gon","Shinei Nouzen","Elric brothers","Saiki kusuou","Hiyori","Nezuku"};

    for(i=0;i<=9;i++)
    {
    if(strcmp(str[i],temp)==0)
       return 1;
      else  if(i==9) return 0;
    }
 }


int fact(int f)
{
    if(f==1) return 1;
    return f*fact(f-1);
}
