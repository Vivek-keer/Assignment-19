#include <stdio.h>
#include <string.h>
int checkvowel(char str1[]);
int main()
{
     int x,i; char str[5][20]; 
     printf("Enter the 5 strings: \n");
     for(i=0;i<5;i++)
     fgets(str,20,stdin);
     for(i=0;i<5;i++)
     {
         x=checkvowel(str[i]);
         printf("Number of vowels in %s is %d\n",str[i],x);
     }
     printf("\n");

}
 int checkvowel(char str1[])
 {
    int i,j,count;
     char vow[10]={"aeiouAEIOU"};
     for(i=0,count=0;str1[i];i++)
     {
        for(j=0;vow[j];j++)
        {
            if(str1[i]==vow[j]) 
            {
                count++; break;
            }

        }
     }
       return count;
 }
