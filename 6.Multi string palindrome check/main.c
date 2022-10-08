#include <stdio.h>
#include <string.h>
int palindrome(char str[],int i);
int main()
{
       char str[10][20]; int i,x,size,temp[10];
    printf("Enter the string: ");
    for(i=0;i<=9;i++)
       fgets(str[i],20,stdin);
      for(i=0;i<=9;i++)
      {
          x= palindrome(str[i],strlen(str[i]));
          temp[i]=x;

      }
      printf("Palindrome strings are: \n");
      for(i=0;i<=9;i++)
        if(temp[i]==1) printf("%s\n",str[i]);

   return 0;

}
int palindrome(char str[],int i)
{

    char temp[20]={}; int x;
    str[i-1]='\0';
    for(x=0,i=i-2;i>=0;i--,x++)
    temp[x]=str[i];

    for(i=0;str[i];i++)
    if(temp[i]!=str[i])  return 0;
    return 1;
}
