#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

void euroToNok(float euro);                         //valuta changer function

int main()
{
    float number;                                   //Parameter of the function
    printf("How many euros do you want to convert?");
    scanf("%f",&number);
    euroToNok(number);                              //Number of euros

return 0;
}

void euroToNok(float euro){                         //Converts euros to NOK

    float NOK = euro * 9.4;                         //Rate of NOK
    printf("%.2f Euros is %.2f NOK",euro,NOK);      //Prints out result

return;
}
