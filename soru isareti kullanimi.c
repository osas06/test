#include<stdio.h>

int main()
{
    int num1 = 6;
    int num2 = 2;
    char name[19];
    printf("%s\n", (num1 % num2 == 0) ? "merhaba" : "selam");
    scanf("%s",&name);
    printf("your name is %s",name);
   
    return 0;
}
