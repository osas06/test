#include<stdio.h>
#include<string.h>



int main()
{

char *ptr[3]={"elma","armut","portakal"};
printf("%s\n",ptr[1]);
ptr[1]="aaa";
int size=strlen(ptr[1]);
printf("size is %d\n",size);
printf("%s",ptr[1]);

    return 0;
}