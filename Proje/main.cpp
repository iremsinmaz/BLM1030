//Elif İrem Sınmaz tarafından hazırlanmıştır.
#include <stdio.h>
#include <string.h>
int not_1;
int not_2;
float toplam;
char yanit[5];
int main() {

    printf("Ogrencinin vize notunu giriniz: ");
    scanf("%d", &not_1);
    printf("Ogrencinin vize notu: %d\n", not_1);
    printf("Ogrencinin final notunu giriniz: ");
    scanf("%d", &not_2);
    printf("Ogrencinin final notu: %d\n", not_2);
    toplam = (0.4 * not_1) + (0.6 * not_2);
    printf("Ogrencinin sinav notlarinin sayisal karsiligi %2.2f\n ", toplam);

    printf("Harf notu gormek istiyorsaniz evet, istemiyorsaniz hayir yaziniz:");
    scanf("%s", &yanit);

    if (strcmp(yanit, "evet") == 0) {
        if (toplam >= 0 && toplam < 35)
            printf("Harf notunuz: FF");
        else if (toplam >= 35 && toplam < 50)
            printf("Harf notunuz: DD");
        else if (toplam >= 50 && toplam < 58)
            printf("Harf notunuz: DC");
        else if (toplam >= 58 && toplam < 65)
            printf("Harf notunuz: CC");
        else if (toplam >= 65 && toplam < 75)
            printf("Harf notunuz: CB");
        else if (toplam >= 75 && toplam < 80)
            printf("Harf notunuz: BB");
        else if (toplam >= 80 && toplam < 85)
            printf("Harf notunuz: BA");
        else if (toplam >= 85 && toplam < 100)
            printf("Harf notunuz: AA");
    }
    else
    {
        printf("Program bitti.");
    }
return 0;
}
