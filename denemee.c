#include <stdio.h>
#include <string.h>

// Renkleri temsil eden bir enum
enum Renk {
    KIRMIZI,
    YESIL,
    MAV,
    SARI
};

int main() {
    // Renk enum'ından bir değişken tanımlama
    enum Renk secilenRenk = MAV;

    char input[12];
    printf("Bir renk girin: ");
    scanf("%s", input);

    // Girilen renk ile secilenRenk karşılaştırması
    if (strcmp(input, "MAV") == 0) {
        printf("Doğru renk: MAV\n");
    } else {
        printf("Yanlış renk\n");
    }

    return 0;
}
