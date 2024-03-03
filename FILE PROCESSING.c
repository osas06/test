#include<stdio.h>
 // Ö N E M L İ : "a"--> silmeden yeni yazı ekler "w" ---> üstüne yazar "r"---> read
/*
2 türlü dosya ile işimiz var bini .bin(ary)  .txt(text)    
Dosyalarla 4 işlem yapılır :
1-aç
2-kapat
3-oku,değiştir
4-oluştur
*/

int main() {


    FILE *fptr = fopen("D:\\C test\\test.txt", "r"); // bunun yerine eğer c ve txt ya da bin dosyası aynı klasördeyse direk test.txt'de yazabilirdik. r---> read
    char buffer[255];
    if (fptr == NULL) {
        printf("File open error!");
        return 1;
    }

   
    while (fgets(buffer, 255, fptr) != NULL) {     
        printf("%s", buffer);
    }

    fclose(fptr);
    
    

    fptr=fopen("D:\\C test\\test2.txt","w"); // EĞER "a" veya "w" kullanırken girilen isimde dosya yoksa otomatik olarak dosya oluşturulur ve işlem yapılır. "r" kullanılırsa NULL döndürülür

    fprintf(fptr,"merhaba dünya");

    fclose(fptr);


    fptr=fopen("D:\\C test\\test3.txt","w"); // test3 yoksa artık yeni bir test3 oluşturulur

    fprintf(fptr,"selamlar");               // test 3'ün içine selamlar yazar

    fclose(fptr);

    
    remove("D:\\C test\\test3.txt"); // test3 dosyasını siler ve eğer silerse 0 döndürür silemezse 0'dan farklı sayı döndürür
    /*
    if(remove("D:\\C test\\test3.txt")==0)
    {
        printf("\nDosya silindi\n");
    }
    else 
    {
        printf("\nDosya silinemedi\n");
    }

    
    
    */
    


    return 0;
}