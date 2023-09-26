#include <string.h>
#include <windows.h>
#include "functii.h"

float punctaj,punctaj1,punctaj2,punctaj3;
void punctajbonus()
{
    system("cls");
    if(punctaj3==0)
    {

        printf("\n____Nu ati reusit sa raspundeti corect la nicio intrebare_____");
        printf("\n_++_Ne pare rau,dar Dobrogea a ramas sub dominatie otomana_++_");
        printf("\n\n\t  Apasati orice tasta pentru a iesi");
                    exit(0);
    }
    if(punctaj3==1)
    {

        printf("\n    Ati reusit sa raspundeti corect la o singura intrebare");
        printf("\n_++_Ne pare rau,dar Dobrogea a ramas sub dominatie otomana_++_");
        printf("\n\n\t  Apasati orice tasta pentru a iesi");
        getch ();
                    exit(0);
    }
     if(punctaj3==2)
    {

        printf("\n       Ati reusit sa raspundeti corect la o doua intrebari");
        printf("\n=====Felicitari!!Ati reusit sa eliberati Dobrogea,dar nu ati cucerit-o!====");
        printf("\n\n\t            Apasati orice tasta pentru a iesi");
        getch();
                    exit(0);
    }
      if(punctaj3==3)
    {

        printf("\n    Ati reusit sa raspundeti corect la toate cele trei intrebari");
        printf("\n@@@@@Felicitari!!!!!Ati reusit sa cuceriti Dobrogea!@@@@@");
        printf("\n______Suntem mandri de performanta dvs______;");
        printf("\n\n\t++_Apasati orice tasta pentru a iesi_++");
        getch();
                    exit(0);
    }

}

void bonus ()
{
    system("cls");
    printf("\n\t:::Felicitari pentru accederea in runda BONUS!!!:::");
    printf("\n\t  ==Misiunea dvs. este cea de a cuceri Dobrogea==\n");
    printf("\n Datorita faptului ca ati ajuns aici,nivelul de cunostinte istorice este unul bun,dar...");
    printf("\n Pentru a reusi cucerirea Dobrogei,trebuie sa raspundeti la intrebari fara variante ajutatoare\n");
    printf("\n\t Apasati orice tasta pentru a incepe");
    getch();
    bonus1();
}
void bonus1 ()
{
    system("cls");
    int r;
    printf("\nIn ce an s-a realizat prima unire a Principatelor?");
    printf("\nRASPUNSUL DVS:");
    scanf("%d",&r);
    if(r==1600)
      {
           printf("\nRaspunsul este corect!");
        punctaj3++;
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        bonus2();
      }

        else
        {
            printf("Raspunsul este gresit");
            printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
            getch();
            bonus2();
        }
}
void bonus2()
{
    system("cls");
    int r1;
    printf("\nCate Principate a reusit sa uneasca Alexandru Ioan Cuza in 1859?");
    printf("\nRASPUNSUL DVS:");
    scanf("%d",&r1);
    if(r1==2)
{
     printf("\nRaspunsul este corect!");
        punctaj3++;
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        bonus3();
}

        else
        {
            printf("Raspunsul este gresit");
            printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
            getch();
            bonus3();
        }


}
void bonus3()
{
    system("cls");
    char r2[30],r3[]="carol",r4[]="CAROL",r5[]="Carol";
    printf("\nCe personalitate istorica a transformat Principatele intr-un regat?");
    printf("\nRASPUNSUL DVS:");
    scanf("%s",&r2);
    if(strcmp(r2,r3)||strcmp(r2,r4)||strcmp(r2,r5))
{
      printf("\nRaspunsul este corect!");
        punctaj3++;
        printf("\n==Apasati orice tasta pentru a afla rezultatul==");
        getch();
       punctajbonus();
}

        else
        {
            printf("Raspunsul este gresit");
             printf("\n==Apasati orice tasta pentru a afla rezultatul==");
            getch();
            punctajbonus();
        }


}

void scorem()
{
    printf("\n\n\t\t[[Conform punctajului acumulat]]\n");
    printf("\t\t\t%.2f de puncte\n",punctaj);

         if(punctaj<=40)
            {
             printf("\nNu v-ati descurcat prea bine in cucerirea Moldovei\n");
             printf("<<Din pacate,nu puteti participa in runda BONUS>>\n\n");
             printf("==Apasati orice tasta pentru a reveni la Principate==");
             getch();
             alege();
            }

         if(punctaj>40&&punctaj<100)
         {
             printf("\nV-ati descurcat bine in cucerirea Moldovei\n");
             printf("<<Puteti participa in runda BONUS>>\n\n");
             printf("\n==Apasati orice tasta pentru a ajunge in runda BONUS==");
             getch();
             bonus();
         }
         if(punctaj==100)
         {
             printf("\nV-ati descurcat excelent in cucerirea Moldovei\n");
             printf("<<Puteti participa in runda BONUS>>\n\n");
             printf("\n==Apasati orice tasta pentru a ajunge in runda BONUS==");
             getch();
             bonus();
         }

}
void scoretro()
{
    printf("\n\n\t\t[[Conform punctajului acumulat]]\n");
    printf("\t\t\t%.2f de puncte\n",punctaj1);

         if(punctaj1<=40)
            {
             printf("\nNu v-ati descurcat prea bine in cucerirea Tarii Romanestii\n");
             printf("<<Din pacate,nu puteti participa in runda BONUS>>\n\n");
             printf("==Apasati orice tasta pentru a reveni la Principate==");
             getch();
             alege();
            }

         if(punctaj1>40&&punctaj1<100)
         {
             printf("\nV-ati descurcat bine in cucerirea Tarii Romanesti\n");
             printf("<<Puteti participa in runda BONUS>>\n\n");
             printf("\n==Apasati orice tasta pentru a ajunge in runda BONUS==");
             getch();
             bonus();
         }
         if(punctaj1==100)
         {
             printf("\nV-ati descurcat excelent in cucerirea Tarii Romanesti\n");
             printf("<<Puteti participa in runda BONUS>>\n\n");
             printf("\n==Apasati orice tasta pentru a ajunge in runda BONUS==");
             getch();
             bonus();
         }

}
void scoretra()
{
    printf("\n\n\t\t[[Conform punctajului acumulat]]\n");
    printf("\t\t\t%.2f de puncte\n",punctaj2);

         if(punctaj2<=40)
            {
             printf("\nNu v-ati descurcat prea bine in cucerirea Transilvaniei\n");
             printf("<<Din pacate,nu puteti participa in runda BONUS>>\n\n");
             printf("==Apasati orice tasta pentru a reveni la Principate==");
             getch();
             alege();
            }

         if(punctaj2>40&&punctaj2<100)
         {
             printf("\nV-ati descurcat bine in cucerirea Transilvaniei\n");
             printf("<<Puteti participa in runda BONUS>>\n\n");
             printf("\n==Apasati orice tasta pentru a ajunge in runda BONUS==");
             getch();
             bonus();
         }

         if(punctaj2==100)
         {
             printf("\nV-ati descurcat excelent in cucerirea Transilvaniei\n");
             printf("<<Puteti participa in runda BONUS>>\n\n");
             printf("\n==Apasati orice tasta pentru a ajunge in runda BONUS==");
             getch();
             bonus();
         }

}

void alege()
{


    char c;
    do{
       system("cls");
       printf("\n    ==VA RUGAM SA ALEGETI UN PRINCIPAT==");
    printf(
           "\n\n\t\tA.Transilvania"
           "\n\n\t\tB.Moldova"
           "\n\n\t\tC.Tara Romaneasca\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A':
            printf("\n\t ==Ati ales Transilvania==");
            printf("\n==Apasati orice tasta pentru a incepe cucerirea==");
         getch();
        transilvania1();
        break;

        case 'B':
            printf("\n\t   ==Ati ales Moldova==");
            printf("\n==Apasati orice tasta pentru a incepe cucerirea==");
         getch();
        moldova1();
        break;

        case 'C':
            printf("\n\t==Ati ales Tara Romaneasca==");
            printf("\n==Apasati orice tasta pentru a incepe cucerirea==");
         getch();
        tara1();
        break;
           default:printf("\n\t!!!Nu ati ales un Principat!!!");
           getch();
           break;


    }}
    while(1);
    return 0;
}
//MENIU TARA ROMANEASCA
void tara1()
{
    char c;
    do{
       system("cls");
    printf("\n1.In ce an a avut loc Batalia de la Posada?\n"
     "\nA.1330"
           "\nB.1445"
           "\nC.1375\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': punctaj1=punctaj1+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara2();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara2();
        break;

        case 'C':
        printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara2();
        break;



    }}
    while(1);
    return 0;
}

void tara2()
{
    char c;
    do{
       system("cls");
    printf("\n2.Ce a facut Basarab I?\n"
     "\nA.A unit Principatele Romane"
           "\nB.A intemeiat Tara Romaneasca"
           "\nC.A luptat impotriva turcilor la Calugareni\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara3();
        break;

        case 'B': punctaj1=punctaj1+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara3();
        break;

        case 'C':   printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara3();
        break;
    }}
    while(1);
    return 0;
}

void tara3()
{
    char c;
    do{
       system("cls");
    printf("\n3.Vlad Tepes....\n"
     "\nA.A domnit de doua ori in Tara Romaneasca"
           "\nB.A fost nepotul lui Mircea cel Batran si varul lui Stefan cel Mare"
           "\nC.A domnit intre anii 1441-1456\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara4();
        break;

        case 'B': punctaj1=punctaj1+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara4();
        break;

        case 'C':   printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara4();
        break;
    }}
    while(1);
    return 0;
}
void tara4()
{
    char c;
    do{
       system("cls");
    printf("\n4.A fost domn al Tarii Romanesti\n"
     "\nA.Iancu de Hunedoara"
           "\nB.Alexandru cel Bun"
           "\nC.Mihai Viteazul\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara5();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara5();
        break;

        case 'C':  punctaj1=punctaj1+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        tara5();
        break;

    }}
    while(1);
    return 0;
}

void tara5()
{
    char c;
    do{
       system("cls");
    printf("\n5.Mircea cel Batran a purtat lupte cu turcii la...\n"
     "\nA.Calugareni"
           "\nB.Varna"
           "\nC.Rovine\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
         scoretro(punctaj1);
        getch();

        break;

        case 'B': printf("\nRaspuns gresit!\a");
          scoretro(punctaj1);
        getch();

        break;

        case 'C':  punctaj1=punctaj1+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
         scoretro(punctaj1);

        getch();
        break;

    }}
    while(1);
    return 0;
}
//MENIU TRANSILVANIA
void transilvania1()
{
    char c;
    do{
       system("cls");
    printf("\n1.Primul voievod atestat al Transilvaniei a fost:\n"
     "\nA.Ioan"
           "\nB.Glad"
           "\nC.Gelu\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
         printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania2();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
          printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania2();
        break;

        case 'C':  punctaj2=punctaj2+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
         printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania2();
        break;
    }}
    while(1);
    return 0;
}

void transilvania2()
{
    char c;
    do{
       system("cls");
    printf("\n2.Iancu de Hunedoara...\n\n"
     "\nA.A fost voievod al Transilvaniei si guvernator al Ungariei"
           "\nB.A fost voievod al Transilvaniei si domn al Tarii Romanesti"
           "\nC.A fost voievod al Transilvaniei si ban al Craiovei\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': punctaj2=punctaj2+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
         printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania3();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
          printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania3();
        break;

        case 'C': printf("\nRaspuns gresit!\a");
          printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania3();
        break;

    }}
    while(1);
    return 0;
}

void transilvania3()
{
    char c;
    do{
       system("cls");
    printf("\n3.Iancu de Hunedoara a domnit in Transilvania intre anii \n\n"
     "\nA.1456-1462"
           "\nB.1386-1418"
           "\nC.1441-1446\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A':printf("\nRaspuns gresit!\a");
          printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania4();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
          printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania4();
        break;

        case 'C': punctaj2=punctaj2+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
         printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania4();
        break;

    }}
    while(1);
    return 0;
}

void transilvania4()
{
    char c;
    do{
       system("cls");
    printf("\n4.Matei Corvin a fost...\n\n"
     "\nA.Voievod al Transilvaniei si guvernator al Ungariei"
           "\nB.Fiul lui Iancu de Hunedoara si rege al Ungariei"
           "\nC.Domn al Tarii Romanesti si al Transilvaniei\n ");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
          printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania5();
        break;

        case 'B': punctaj2=punctaj2+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
         printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania5();
        break;

        case 'C': printf("\nRaspuns gresit!\a");
          printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        transilvania5();
        break;

    }}
    while(1);
    return 0;
}

void transilvania5()
{
    char c;
    do{
       system("cls");
    printf("\n5.Transilvania a fost sub ocupatie maghiara?\n\n"
     "\nA.NU"
           "\nB.DA\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
         scoretra(punctaj2);
        getch();

        break;

        case 'B': punctaj2=punctaj2+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        scoretra(punctaj2);
        getch();

        break;
    }}
    while(1);
    return 0;
}

//MENIU MOLDOVA
void moldova1()
{
    char c;
    do{
       system("cls");
    printf("\n1.Cine a intemeiat Moldova?\n\n"
     "\nA.Stefan cel Mare"
           "\nB.Negru Voda"
           "\nC.Dragos Voda\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova2();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
       moldova2();
        break;

        case 'C':   punctaj=punctaj+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova2();
        break;



    }}
    while(1);
    return 0;
}
void moldova2()
{

      char c;
    do{
       system("cls");
    printf("\n2.Cati ani a domnit Stefan cel Mare?\n\n"
     "\nA.23"
           "\nB.47"
           "\nC.36\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova3();
        break;

        case 'B': punctaj=punctaj+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova3();
        break;

        case 'C': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova3();

        break;
}
    }while(1);
    return 0;
}

void moldova3()
{
  char c;
    do{
       system("cls");
    printf("\n3.Care a fost prima capitala a Moldovei?\n"
     "\nA.Baia"
           "\nB.Suceava"
           "\nC.Iasi\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': punctaj=punctaj+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova4();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova4();
        break;

        case 'C': printf("\nRaspuns gresit!\a");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova4();
        break;
}
    }while(1);
    return 0;
}
void moldova4()
{
  char c;
    do{
       system("cls");
    printf("\n4.A fost fiu a lui Stefan cel Mare...\n"
     "\nA.Petru Musat"
           "\nB.Stefan al III-lea"
           "\nC.Petru Rares\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
           printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova5();
        break;

        case 'B': printf("\nRaspuns gresit!\a");
           printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova5();
        break;

        case 'C': punctaj=punctaj+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");
        printf("\n==Apasati orice tasta pentru urmatoarea intrebare==");
        getch();
        moldova5();
        break;
}
    }while(1);
    return 0;
}
void moldova5()
{
  char c;
    do{
       system("cls");
    printf("\n5.In ce an a avut loc batalia de la Vaslui(Podul inalt)?\n"
     "\nA.1476"
           "\nB.1475"
           "\nC.1500\n");
    c=toupper(getch());
    switch(c)
    {
        case 'A': printf("\nRaspuns gresit!\a");
                 scorem(punctaj);
        getch();
        break;

        case 'B': punctaj=punctaj+20;
        printf("\nAti raspuns corect si ati acumulat 20 de puncte");

                 scorem(punctaj);
        getch();
        break;

        case 'C': printf("\nRaspuns gresit!\a");
        scorem(punctaj);

        getch();
        break;

   }
    }while(1);
return 0;

}

void harta()
{
printf("\n                                                                #@@. *@@.  ");
printf("\n                             #@/.@ ..& &                       .@.       @. ");
printf("\n                           @@            &&,*& & &@,&&&%@&(.&&            &* ");
printf("\n                      @**                         & (                      .@ ");
printf("\n                    /&                            &                          @# =Apasati orice tasta pentru a continua=");
printf("\n                  .@.                             &                           /@/");
printf("\n                 /@                              &                             %@ ");
printf("\n                @.                               &                               @,");
printf("\n               @                                 &                                @.");
printf("\n             &@                                 &                                %@ ");
printf("\n          .@                                    &                                 @.");
printf("\n       @@@@#           TRANSILVANIA             &               MOLDOVA           #( ");
printf("\n   @@@@                                         &                                  @ ");
printf("\n    &@                                         &                                    @.");
printf("\n      @@,                                     &  &                                    @/");
printf("\n       @/                                    &     &                                  &&@@@");
printf("\n        @#                                 &         & &  & &&  &% & &  &  ,          &     $$@##@%##@@@@@@");
printf("\n         .@@@.                          &                                    &      &           @#@@@");
printf("\n             %@                       &                                        &  &           &&@ ");
printf("\n              @                     &                                           &  DOBROGEA (@ ");
printf("\n               &@.              &                                             &          *@&  ");
printf("\n                  &@((@  # &  &              TARA ROMANEASCA                   &&        @  ");
printf("\n                       &&*                                                       &        @ ");
printf("\n                          & @&                                                  @@@@@      @ ");
printf("\n                             (@                                                %@    $$     @@ ");
printf("\n                               & @#,,                                     @@@@@@      @#    &@@ ");
printf("\n                                    @#@#@#@#@#@#@#@#@#%#^%^&(@%&@@#$$#@#@#@@@@@           #@#@#@#@");

}

