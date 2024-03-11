#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
fseek() fonksiyonu, dosya işaretçisinin (file pointer) konumunu belirli bir konuma taşımak için kullanılır. 

SEEK_SET: Dosya başlangıcından itibaren belirtilen konuma kadar olan byte'ları sayar. Yani, dosya başlangıcından belirtilen konum kadar ileri gider.

SEEK_CUR: Dosya işaretçisinin bulunduğu konumdan itibaren belirtilen miktarda byte'ları sayar. Yani, mevcut konumdan belirtilen miktarda ileri veya geri gider.

SEEK_END: Dosyanın sonundan itibaren belirtilen konuma kadar olan byte'ları sayar. Yani, dosyanın sonundan belirtilen konum kadar geri gider.

Bu makro değerler, fseek() fonksiyonu aracılığıyla dosya işaretçisini taşımak için kullanılır. 
*/

/*
fwrite() fonksiyonu, belirli bir miktarda veriyi bir dosyaya yazmak için kullanılır.
fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *file_pointer);  RETURN DEĞERİ : başarılı şekilde yazılan element sayısını döndürür (hepsi başarılıysa number_of_elements , hepsi hatalıysa 0 ya da -1)

ptr: Yazılacak verinin bellekte saklanacağı adresi belirtir.
size_of_elements: Her bir öğenin boyutunu belirtir.
number_of_elements: Yazılacak öğe sayısını belirtir.
file_pointer: Dosya işaretçisini belirtir.

Örneğin, eğer bir dizi Ogrenci yapısını dosyaya yazmak istiyorsanız ve bu yapının boyutu 100 byte ise
ve dosyaya sadece bir öğe yazmak istiyorsanız, number_of_elements parametresi olarak 1 kullanırsınız.
Eğer dosyaya ardışık olarak 5 Ogrenci yapısını yazmak istiyorsanız, bu durumda number_of_elements parametresi olarak 5 kullanırsınız.

*/

/*
fread() fonksiyonu, bir dosyadan belirli bir miktar veri okumak için kullanılır.

fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *file_pointer);  RETURN DEĞERİ : EĞER FREAD HATASIZ ÇALIŞIRSA number_of_elements'i döndürür yoksa 0 döndürür.

ptr: Okunan verinin bellekte saklanacağı adresi belirtir.
size_of_elements: Her bir öğenin boyutunu belirtir.
number_of_elements: Okunacak öğe sayısını belirtir.
file_pointer: Dosya işaretçisini belirtir.
*** number_of_elements, size_of_elements parametresi ile belirtilen boyutta verilerin kaç tane okunacağını belirler.
Üçüncü argüman olan number_of_elements, okunacak öğe sayısını belirtir.
Yani, fread() fonksiyonu kaç adet veri öğesi okunacağını belirlemek için kullanılır
Bu sayı, size_of_elements parametresi ile belirtilen boyutta verilerin kaç tane okunacağını ifade eder.

dosyadan okuma yapılırken fread() fonksiyonu kullanıldığında, dosya işaretçisi her fread() çağrısı için belirtilen veri boyutu kadar ileri hareket eder.

Örneğin, eğer bir Ogrenci yapısını dosyadan okumak istiyorsanız ve bu yapının boyutu 100 byte ise, ve dosyadan sadece bir öğe okumak istiyorsanız,
number_of_elements parametresi olarak 1 kullanırsınız.

Eğer dosyadan ardışık olarak 5 Ogrenci yapısını okumak istiyorsanız, bu durumda number_of_elements parametresi olarak 5 kullanırsınız.



*/











struct A {
    int x;
    double y;
    short int z;
//                      sizeof(struct A) dersek en büyük boyutlu member * member sayısı yapılır
//                      x=4 , y=8 , z=2  fakat ayrılan alan 8 + 8 + 8 = 24 tür . en büyüğe göre ayrılır                    
};


struct Ogrenci {
    char ad[20];
    int yas;
};

int main() {
    FILE *dosya;
    struct Ogrenci ogrenci1, ogrenci2;

    // Ogrenci yapısı oluşturuluyor
    struct Ogrenci ogrenciler[2] = {
        {"Ali", 20},
        {"Ayşe", 22}
    };

    // Dosyaya yazma işlemi
    dosya = fopen("ogrenciler.bin", "w"); 
    if (dosya == NULL) {
        printf("ogrenciler.bin açılırken hata oluştu");
        return 1;
    }

    // Dosyaya iki ogrenci yapısını yazma
    fwrite(ogrenciler, sizeof(struct Ogrenci), 2, dosya); // sırasıyla ogrenciler[0] ve ogrenciler[1] olmak üzere dosya içine yazdırılır yani toplamda 2 tane

    fclose(dosya);

    // Dosyadan okuma işlemi
    dosya = fopen("ogrenciler.bin", "r"); // Binary modunda dosya açılıyor
    if (dosya == NULL) {
        printf("ogrenciler.bin açılırken hata oluştu");
        return 1;
    }

    // Dosyadan iki ogrenci yapısını okuma
    fread(&ogrenci1, sizeof(struct Ogrenci), 1, dosya); // dosyadan okuma yapılırken fread() fonksiyonu kullanıldığında, dosya işaretçisi her fread() çağrısı için belirtilen veri boyutu kadar ileri hareket eder.
    fread(&ogrenci2, sizeof(struct Ogrenci), 1, dosya);

    fclose(dosya);

    // Okunan verilerin ekrana yazdırılması
    printf("1. Ogrenci: Adı: %s, Yaşı: %d\n", ogrenci1.ad, ogrenci1.yas);
    printf("2. Ogrenci: Adı: %s, Yaşı: %d\n", ogrenci2.ad, ogrenci2.yas);

    return 0;
}