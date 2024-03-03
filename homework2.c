#include<stdio.h>


void check(char *ptr);

int main()
{
    char str[100];
    scanf("%s",str);
    int size=0;
    while(str[size]!='\0')
    {
        size++;
    }
    check(str);

    return 0;
}


void check(char *ptr)
{
int num=0,letter=0,special=0;
while(*ptr!='\0')
{

if(*ptr>=65 && *ptr<=90 || *ptr>=97 && *ptr<=122)
{
    letter++;
}
else if(*ptr>=48 &&*ptr<=57)
{
    num++;
}
else
{
    special++;
}
ptr++;

}
if(*ptr=='\0')
{
    printf("This string has\n%d letters\n%d numbers\n%d special characters",letter,num,special);
}




}