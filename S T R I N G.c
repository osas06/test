#include<stdio.h>
#include<string.h>


int main()
{
    char str[100]="merhaba",str2[100]="hello";
    int result=strcmp(str,str2); // eğer string uzunluğu olarak 1.>2. olursa return > 0 , 1.<2. olursa return < 0 , 1.=2. olursa return 0 olur
    printf("Return result of strcmp is %d",result);
    strcat(str,str2); // 1. string = 1. + 2. string yapar
    printf("\n%s\n",str);
    strcpy(str,str2); // 1. string = 2. string yapar
    printf("\n%s\n",str);
    int size=strlen(str); // stringin kaç karakterden oluştuğunu buluruz
    printf("size of str is %d\n",size);
    
    strcpy(str,"merhaba");
    strcpy(str2,"hello");
    
    char *str3=strncpy(str,str2,4); // string 1'in baştan başlayarak girilen sayı kadar karakterini string 2'nin başından alıp string 1'e atar örneğin 3 karakter (mer)haba -->(hel)haba ve 1. stringin adresini return eder 
    printf("string 3 is %s\n",str3);
    //printf("%s\n",str);
    strcpy(str,"merhaba");
    strcpy(str2,"hello");
    
    strncat(str,str2,2); //girilen sayı kadar kısmı 2. stringin başından alır ilk stringin sonuna ekler string 1'i döndürür
    printf("string 4 is %s\n",str);


    strchr(str,'a');  //1. stringin içerisinde , girilen karakteri arar eğer bulursa karakterin ilk bulunduğu yeri işaret eden bir işaretçi döndürür eğer bulamazsa NULL döndürür
    char *ptr=strchr(str,'a'); 
    printf("return character is %c\n",*ptr);
    
    strrchr(str,'e');
    char *ptr2=strrchr(str,'h'); // strchr'den farkı girilen karakterin son bulunduğu yeri işaret eden işaretçi döndürür eğer bulamazsa NULL döndürür
    printf("return character is %c\n",*ptr2);
    

    strcpy(str,"merhaba");
    strcpy(str2,"hello");
    

    printf("\nbefore %s\n",str);

    memset(str,'A',3); // girilen sayı kadar stringin başından (örnekte 3) karakteri istenilen karaktere çevirir

    printf("\nafter %s\n",str);

    char *ret=memchr(str,'a',100); // string içerisinde,girilen uzunluk kadar baştan arar ve aranan karakteri bulduğunda bulunan karakterin konumunu işaret eden bir pointer döndürür bulamazsa NULL döndürür(karakteri bulduğu yerden sona kadarki kısmı alır)
    
    printf("%s",ret); // bu da olurdu --> printf("%s",(char*)memchr(str,'a',100))


    return 0;
}