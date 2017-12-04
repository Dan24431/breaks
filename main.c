#include <stdio.h>
#include <stdlib.h>

int main(void){
int a,howman;
int maxloop = 10;
   printf ("how many times do you want this code to run?");
   scanf ("%d",&howman);
   for (a=1; a < maxloop; a++){

    printf("%d\n",a);
    if (a==howman){
        break;
    }




   }









    return 0;
}
