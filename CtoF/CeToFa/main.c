#include <stdio.h>
#include <stdlib.h>

float CtilF(float celsius);     //Celcius og Farenheit function


int main()
{
    float number;
    printf("Number of celsius:   \n");      //Promt user
    scanf("%f",&number);                    //Type number of celsius
    CtilF(number);                          //Number becomes parameter to CtoF function

    return 0;
}

float CtilF(float celsius){                 //CtoF function
    float f;
    f=( (9 / 5)*celsius + 32);
    printf("%.2f celsius is %.2f fahrenheit",celsius, f);
return;
}
