
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char pottit[10];
    char* potet;
    char* funni;
    char* setning;
    int antall = 0;
    char ord[150];

    FILE*fpointer = fopen("frokost.txt","r");   //aapner fil med navn frokost.txt

    if(fpointer==NULL)                          //hvis filen ikke er funnet
    {
        printf("filen eksisterer ikke\n");
    }
    else
    {
            while(!feof(fpointer))
            {
                fgets(ord,150,fpointer);
                puts(ord);                      //henter text fra fil
                printf("skriv inn ord du vil lete etter: \n");
                scanf("%s",&pottit);
                potet = pottit;
                setning = ord;                  //peker på texten
                funni = strstr(setning,potet);  //funni ord er strstr funk

                    while(funni !=  NULL)               //while det er ord å finne
                    {
                        printf("%s\n",funni);               //skriver ut funni ord
                        funni = strstr((funni+1),potet);    // legger til 1 bit på funni
                        antall++;                           //sånn at ikke blir samme ord igjen
                    }

                printf("antall ganger funnet: %d\n",antall);
            }
        fclose(fpointer);                                   //lukk fil
    }
	return 0;
}

