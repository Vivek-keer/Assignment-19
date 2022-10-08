#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void signup(char p[][30])
{
    int i=0;
    printf("First name\t: "); takeinput(p[i]);
    printf("Last name\t: "); takeinput(p[++i]);
    printf("Email address\t: "); takeinput(p[++i]);
    printf("Date of Birth\t: "); takeinput(p[++i]);
    printf("Contact number\t: ");takeinput(p[++i]);
    printf("Password\t: "); takeinput(p[++i]);
  system("cls");

}
void takeinput(char str[])
{
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
}
void login(char l[][30])
{
    int i=0;
    printf("Username\t: "); takeinput(l[i]);
    printf("Password\t: "); takeinput(l[++i]);
}

void cont()
{
    printf("\n \t\t\t\t Enter any key to Continue...");
}
//---------------------------------------------------------------------------------------------------------------------//
int main()
{
    char sign[6][30]={}; char lgin[2][30]; char uname[20]={};
    int flag=1,x,i;
       while(flag)
       {
     system("cls");
     printf("\t\t\t\t-----------------AUTHENTICATION SYSTEM-------------------\n\n");
     printf("Enter your choice: \n 1. Sign up\n 2. Login \n 3. Exit\n");
     scanf("%d",&x);
     system("cls");
     fflush(stdin);
     switch (x)
     {

     case 1:
         printf("\t\t\t\t-----------------SIGN UP FORM-------------------\n\n");
         signup(sign);
          for(i=0;sign[2][i]!='@';i++)
            uname[i]=sign[2][i];

              printf("\n\n YOUR USERNAME IS \"%s\"!!",uname);
              printf(" You are ready to logged in");cont();
              getch();
        break;

      case 2:
          if(sign[0][30]=='\0')
           {
            system("cls");
            printf("You are not signed in...");
            cont();getch();
            break;
           }
        else
            {
                login(lgin);
                if((strcmp(lgin[0],uname)==0)&&(strcmp(lgin[1],sign[5])==0))
                        {
                            system("cls");
                            printf("\t\t\t\tWELCOME!! YOU ARE LOGGED IN\n");
                            for(i=0;i<=5;i++)
                             printf("%s\n",sign[i]);

                        }

                else printf("Invalid Username or password");
               cont(); getch();
             }
        break;
      case 3:
            exit(0);
        break;
     default:
         printf("Enter the valid option");
        break;
     }

       }
     printf("\n\n");
      return 0;

}























