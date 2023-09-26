#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include "functii.h"

int main()

{
     char choice;
     char playername[20];

do{
     system("cls");
     printf("\n\t\t    Bine ati venit in Epoca Medievala!\n");
     printf("\n\t\t________________________________________        \n");
     printf("\n\t\t        [  PRINCIPATELE ROMANE  ]                 ");
     printf("\n\t\t                  QUIZ");
     printf("\n\t\t     ___|_______________________|___        ");
     printf("\n\t\t         _______________________             ");
     printf("\n\n\t\t     -> CUCERIREA PRINCIPATELOR <- ");
     printf("\n\n\t\t               este doar ");
     printf("\n\t\t       la un -> click <- distanta");
     printf("\n\n\t\t========================================");
     printf("\n\t\t________________________________________");
     printf("\n"                                             );
     printf("\n\t\t  >Apasati S pentru a incepe");
     printf("\n\t\t  >Apasati I pentru informatii autor");
     printf("\n\t\t  >Apasati Q pentru a iesi             ");
     printf("\n\t\t________________________________________\n");


choice=toupper(getch());
switch(choice)
{
      case 'I':printf("\tNume:\t\tPentelescu Claudiu-Gabriel"
                       "\n\tSpecializarea:\tCalculatoare"
                       "\n\tGrupa:\t\t3115B\n\n"
                      );
                      printf("\t[]Apasati orice tasa pentru a continua[]");
                      getch();
                      break;

      case 'S':printf("\n\t\t\t Introduceti numele:\n");
     printf("\t\t\t\t");scanf("%s",&playername);
     printf("\t\t________________________________________");
     printf("\n");
     printf("\t\t   **Succes la cucerit,%s!**\n\n",playername);
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







