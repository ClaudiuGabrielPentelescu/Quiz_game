#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
#include "functii.h"

int main()

{


       //PlaySound(TEXT("european-anthem-2012.wav"),NULL,SND_ASYNC);

     int countr,r,r1,count,i,n;
     float scor=0;
     char choice;
     char playername[20];

do{
     system("cls");
     printf("\n\t\t   Bine ati venit in Epoca Medievala!\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t                 INTRATI ");
     printf("\n\t\t                   in  ");
     printf("\n\t\t                  QUIZ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\tDoar aici puteti afla daca va cunoasteti");
     printf("\n\t\t                ISTORIA");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t >Apasati I pentru a incepe");
     printf("\n\t\t >Apasati V pentru a va vedea scorul ");
     printf("\n\t\t >Apasati Q pentru a iesi             ");
     printf("\n\t\t________________________________________\n\n");


choice=toupper(getch());
switch(choice)
{
      case 'I':printf("\n\t\t\tIntroduceti numele:\n");
     printf("\t\t\t\t");scanf("%s",&playername);
     printf("\t\t________________________________________");
     printf("\n");
     printf("\t\t\t***Buna ziua,%s!***\n\n",playername);
     printf("\n");
     printf("\n");
     printf("\n==Apasati orice tasta pentru a continua==");
getch();

printf("\n\n\t\t\t\t\t==Alegerea Principatului==");
printf("\n");
harta();
getch();

alege();
getch();
break;

  case 'Q': printf("\t\t==Ati ales sa iesiti din Quiz==");
                exit(0);
            default:printf("\n\t\tOptiune indisponibila");
            getch();
            break;


}

   }while(1);
   return 0;
     }







