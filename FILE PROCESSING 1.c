#include<stdio.h>
#include<stdlib.h> // file işlemleri için lazım
#include<string.h>
//sequential access -> baştan sona doğru sıradan 
// random access -> fare imleci var gibi istediğin yerden

// r->read w->write a->ekleme 
/*

r ->read (var olan dosyayı aç ve oku)
w ->write (dosya oluştur ve yaz eğer dosya zaten varsa mevcut içeriği sıfırla)
a -> dosya varsa aç yoksa oluştur ve öncekileri silmeden sondan başlayarak yaz 
r+ -> var olan dosyayı değişiklik yapmak için aç (okuma yazma)  
rb -> binary dosyası oku (binary'e göre de yapılabilirler rb wb ab rb+ wb+ ab+)
"+" işareti eklenerek bu modlar, okuma işlemi için de kullanılabilir hale gelir. r+ dosyayı hem okumaya hem yazmaya yarar

*/
int main()
{
    FILE *fptr;
   
    fptr=fopen("D:\\C test\\test.txt","w"); // yaz
    if(fptr==NULL)
    {
        printf("File open error !");
    }
    int number=3;
    fprintf(fptr,"HELLO %d",number); //dosya içince yazma
    fclose(fptr);

    fptr=fopen("D:\\C test\\test.txt","r"); // oku

    char buffer[255];
    fscanf(fptr,"%s",buffer); // okunacakları buffer'ın içine doldurduk buffer string olduğu için '&' kullanmadık yoksa kullanırdık
    printf("\n%s\n",buffer); 
    
    int num;
    scanf("%*s %d",&num); // %*s ignore yaparak sadece %d'yi kullandık  %*d olsa bu da ignore'lanırdı

    fclose(fptr);
    
    /*
    diyelim ki dosya içi şu şekilde
    name age city
    ali 15 ankara
    furkan 16 antalya
    can 17 yozgat
    */
    fptr=fopen("D:\\C test\\test.txt","r");
    char str[255];
    while(fscanf(fptr,"%*s %*s %s",str)==1) // ilk iki stringi ignore'la 3. stringi str'nin içine doldur ve bunu fscanf 1 döndürdükçe yap NULL gelmediği sürece 
    {
        printf("%s \n",str); // city ankara antalya yozgat
    }
    fclose(fptr);



     fptr=fopen("D:\\C test\\test.txt","r");
     do
     {
        char ch=fgetc(fptr); // fgetc(fp) fonksiyonu, dosyadan bir karakter okur ve dosya işaretçisini bir sonraki karakterin konumuna ilerletir. Bu sayede, her çağrıldığında dosyadan sıradaki karakteri okuyabilir
        printf("%c",ch);
        if(feof(fptr)==1) // end of file - dosyanın sonuna gelinirse 1 değerini döndürür
        {
            printf("file ended");
            break;
        }

     } while (1);
    
    fclose(fptr);

     fptr=fopen("D:\\C test\\test.txt","w");
     char string[]="hello",gelenstring[20];
     for(int i=0;string[i]!='\0';i++)
     {
        fputc(string[i],fptr); // fputc() fonksiyonu, belirtilen karakteri belirtilen dosyaya yazar ve dosya işaretçisini bir sonraki konuma ilerletir.
     }
     fclose(fptr);


      fptr=fopen("D:\\C test\\test.txt","r");
        fgets(gelenstring,20,fptr); // dosyadaki 20 karakteri gelenstring'in içine koy
        printf("%s",gelenstring);
        fclose(fptr);

     fptr=fopen("D:\\C test\\test.txt","w");
     char str2[40]="merhaba";
     fputs(str2,fptr); // fputs() fonksiyonu, bir karakter dizisini belirtilen dosyaya yazmak için kullanılır
    /*
        while(gets(str) != NULL) kullanıcı ctrl+z yapana kadar string alır 
        {
        fputs(str, fp);          kullanıcının girdiği inputu dosyanın içine koyar
        }
    */
    fclose(fptr); 



    return 0;
}