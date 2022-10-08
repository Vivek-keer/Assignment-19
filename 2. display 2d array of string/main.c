
#include <stdio.h>
#include <string.h>

int main()
{
     int i,x,y,j; char str[100][50],temp[20][20]={};
     printf("Enter the number of strings: ");
     scanf("%d",&x);
     printf("Enter the strings: \n");
     fflush(stdin);
     for(i=0;i<x;i++)
       fgets(str[i] ,20,stdin);
       printf("\nStrings are: \n");
     for(j=0;j<x;j++)
        printf("%s",str[j]);

     return 0;



}


