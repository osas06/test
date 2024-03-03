#include<stdio.h>



int main()
{

int a=3;    //00011
int b=6;    //00110

printf("%d",a&b); //00010 = 2
printf("\n%d",a|b); //00111 = 7
printf("\n%d",a^b); //00101 = 5
// ~a yaparsak 0'lar 1'e , 1'ler 0'a döner. ~ değil alma gibi düşün.
printf("\n%d",a<<1);  //00110 = 6
printf("\n%d",b>>2);  //00001 = 1


return 0;

}