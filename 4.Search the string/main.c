#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][20]={"My hero Academia","Tokyo revengers","One punch man" ,"Attack on titan","Hunter x hunter","Eighty six","FMAB","Saiki kusuou","Noragami","Demon slayer"};
    char temp[20];
    int i;

    printf("Search the anime/string: ");
    fgets(temp,20,stdin);
    for(i=0;temp[i];i++);
    temp[i-1]='\0';
    for(i=0;i<=9;i++)
    {
    if(strcmp(str[i],temp)==0)
       {
       printf("\"%s\" exist at number %d",str[i],i+1);
       break;

       }
      else  if(i==9) printf("Does not exist");
    }

        return 0;


}

