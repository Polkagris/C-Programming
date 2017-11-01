#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int rtall = 0;
    int tall = 0;
    int tries = 0;

    srand(time(NULL));              //Makes only one correct number at a time
    rtall = rand()%101;             //Generate random number

    printf("Pick a number between 0 and 100\n");

    while(tall != rtall){           //While not correct

    scanf("%d",&tall);

        if(rtall==tall){            //Correct
            printf("Correct!\n");
        }
        else if(rtall<tall){        //Random number is lower than picked number
            printf("Too high!\n");
        }
        else{                       //Random number is higher than picked number
            printf("Too low!\n");
        }
        tries++;                    //Add one to tries every time
    }
    printf("you had %d tries\n", tries);

    return 0;
}
