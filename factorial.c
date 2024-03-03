#include <stdio.h>

// Recursive olarak faktöriyel hesaplayan fonksiyon
unsigned long long calculateFactorial(int number) {
    // Temel durum: 0! ve 1! her zaman 1'dir
    if (number == 0 || number == 1) {
        return 1;
    } else {
        // Recursive hesaplama
        return number * calculateFactorial(number - 1);
    }
}

int main() {
    int userInput;

    // Kullanıcıdan sayıyı al
    printf("Lutfen faktoriyelini hesaplamak istediginiz sayiyi girin: ");
    scanf("%d", &userInput);

    // Kullanıcının girdiği sayının faktöriyelini hesapla
    unsigned long long result = calculateFactorial(userInput);

    // Sonucu ekrana yazdır
    printf("Faktoriyel: %llu\n", result);

    return 0;
}
