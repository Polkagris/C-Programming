#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>       //include for random function
#include <string.h>

int main()
{
int i;
int diceroll;

for(i=0; i<20; i++){                //20 dice rolls
    diceroll = (i, rand()%6 + 1);   //Dice roll logic
    printf(" %d \n",diceroll);      //Print rolls
}

return 0;
}
