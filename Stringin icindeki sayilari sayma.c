#include<stdio.h>
#include<string.h>
// 48 - 57 aralığı ASCII de rakamlara tekabül eder
/*KISAYOL COZUM
int main() {
    int digits[10] = {0}; //10 tam sayılık, başlangıç değerleri sıfır olan bir tam sayı dizisi yaratıyoruz
    char c;
    while(scanf("%c", &c) == 1){ //Yeni karakter girildiği sürece
        if(c >= '0' && c <= '9') digits[c-'0'] += 1; //Eğer bu karakter bir rakamsa, bu rakamın denk geldiği dizi elemanının değerini 1 arttır
    }
    for(int i = 0; i< 10; i++) printf("%d ", digits[i]);
    return 0;
}
c - '0' ifadesi, ASCII değerinden '0' karakterinin ASCII değerini çıkarır ve bu işlem sonucunda gerçek rakamın indeksini elde ederiz. 
Örneğin, '3' karakterinin ASCII değeri 51'dir ve '0' karakterinin ASCII değeri 48'dir, bu yüzden digits[51-48] ifadesi digits[3] dizisinin üçüncü elemanını ifade eder.
*/

int main()
{
    char ar[100]="";
    int f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;
    scanf("%[^\n]",ar);
    int size=strlen(ar);
    for(int i=0;i<size;i++)
    {

        switch(ar[i])
        {
            case 48:
            f0++;
            break;
            case 49:
            f1++;
            break;
            case 50:
            f2++;
            break;
            case 51:
            f3++;
            break;
            case 52:
            f4++;
            break;
            case 53:
            f5++;
            break;
            case 54:
            f6++;
            break;
            case 55:
            f7++;
            break;
            case 56:
            f8++;
            break;
            case 57:
            f9++;
            break;




        }


    }
    printf("%d %d %d %d %d %d %d %d %d %d",f0,f1,f2,f3,f4,f5,f6,f7,f8,f9);
    

    return 0;
}