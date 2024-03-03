#include <string.h>
#include<stdio.h>
#include<math.h>

void reverse(char *str)
{
    if(str[0]=='\0')
    {
        return;
    }

    else
    {
        reverse(&str[1]);
        putchar(str[0]);
    }

}

int main()
{
    char str[100];
    fgets(str,100,stdin);
    reverse(str);
    printf("%s",str);

 
    return 0;
}



