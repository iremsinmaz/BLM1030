//Elif İrem Sınmaz tarafından hazırlanmıştır.
#include <stdio.h>
#include <string.h>
int main() {
    char cevap[5];
    char yanit_2[10];
    char cevap_3[10];
    char cevap_4[10];
    printf("TM iseniz esit_agirlik, MF iseniz sayisal yaziniz:\n");
    scanf("%s", &cevap);
    if (strcmp(cevap, "esit_agirlik") == 0 ) {
        printf("Hukuk icin hukuk, psikoloji icin psikoloji, isletme icin is, pdr icin pdr, diger bolumler icin diger yaziniz:\n");
        scanf("%s", yanit_2);
        if (strcmp(yanit_2, "hukuk") == 0 ) {
            printf("tebrikler, muhtemelen tc hukuku altinda ezileceksiniz ama aldiginiz ucret sizi tatmin edecek.");

        }
        if (strcmp(yanit_2, "psikoloji") == 0 ) {
            printf("ozelde calisman ruh sagligin icin onemli.");
        }
        if (strcmp(yanit_2, "is") == 0 ) {
            printf("babanin parasi yoksa sictin.");
        }
        if (strcmp(yanit_2, "pdr") == 0 ) {
            printf("sude yaykiran deilsen hemen vazgec.");
        }
        else {
            printf("dude you already fucced up.");
        }
    }
    else {
        printf("Tip icin tip, muhendislik icin mhnds, digerleri icin diger yaziniz:");
        scanf("%s", cevap_3);
        if (strcmp(cevap_3, "tip") == 0 ) {
            printf("Damnnn 20k maas und sinirsiz statu");
        }
        if (strcmp(cevap_3, "mhnds") == 0 ) {
            printf("Makine icin mach, elektrik icin elc, bilgisayar icin pc, mekatronik icin god, endustri icin ind, kimya icin che yaziniz.");
            scanf("%s", cevap_4);
            if (strcmp(cevap_4, "mach") == 0 ) {
                printf("30 yasinda mezun ve askerligini tamamlayamamis mutsuz muhendis");
            }
            if (strcmp(cevap_4, "elc") == 0 ) {
                printf("pikachu assniggu");
            }
            if (strcmp(cevap_4, "pc") == 0 ) {
                printf("huseyin hoca seninle gurur duyuyor assniggu");
            }
            if (strcmp(cevap_4, "god") == 0 ) {
                printf("sen allahsin, go on. learn everything");
            }
            if (strcmp(cevap_4, "ind") == 0 ) {
                printf("bir sirkette ceo olacaksin... for real.. unless..?");
            }
            if (strcmp(cevap_4, "che") == 0 ) {
                printf("bogazicinden mezun degilsen probably issiz.");
            }
            


        }
        else {
            printf("bruh get yourself a REAL job");
        }

    }



    return 0;
}
