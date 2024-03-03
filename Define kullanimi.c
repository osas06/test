#include <stdio.h>
#define f(x) x*x
#define leblebi 'a'
#define armut "merhabalar"


int main() {
    
    printf("%c\n",leblebi);
    printf("%s\n",armut);
    int x;

    printf("Karesi alinacak sayiyi girin \n");
    scanf("%d",&x);
    printf("karesi %d",f(x));


    return 0;
}
