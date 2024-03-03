#include<stdio.h>
#include<string.h>
void primer(char *str);

int main()
{
char str[]=" ";
scanf("%[^\n]s",str);
primer(str);
printf("%s",str);

    return 0;
}


void primer(char *str)
{

while(*str!=' ')
{
*str=toupper(*str);
str++;
}

}