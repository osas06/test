#include<stdio.h>


int main()
{
    char osas=getchar(); // kullanıcının girdiği karakteri alır ASCII şeklinde osas'a aktarır 

    char st[]="hello";

    putchar(osas);  //tek karakteri printler ve karakterin ASCII değerini döndürür

    putchar('\n');  // bu şekilde alt satıra da geçer

    puts(st); // sadece stringler içindir otomatik \n koyar

    puts("merhaba"); //bu şekilde de kullanılır

    char str[100];

    fgets(str,100,stdin); // boşlukları da dahil eden scanf

    //scanf("%[^\n]%*c",str);  //bu şekilde de boşlukları alabiliriz [^\n] kısmı new line gelene kadar input al demek

    printf("%s",str);

    
    return 0;
}
