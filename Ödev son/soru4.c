#include <stdio.h>

struct Ogrenci {
    char ad[20];
    char soyad[20];
    int numara;
    char adres[50];
};

int main() {
    struct Ogrenci ogrenciler[5];
    int i;
    printf("Bu program 5 adet ogrencinin ad,soyad,okul numarasi ve adres bilgilerini kullanicidan alarak bir struct'a depolar.Ve sonunda ekrana yazdirir.\n");
    printf("-------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("Ogrenci %d;\n", i+1);
        printf("Ad: ");
        scanf("%s", ogrenciler[i].ad);
        printf("Soyad: ");
        scanf("%s", ogrenciler[i].soyad);
        printf("Numara: ");
        scanf("%d", &ogrenciler[i].numara);
        printf("Adres: ");
        scanf("%s", ogrenciler[i].adres);
    }
    printf("-------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("Ogrenci %d;", i+1);
        printf(" Ad:%s", ogrenciler[i].ad);
        printf(" Soyad:%s", ogrenciler[i].soyad);
        printf(" Numara:%d", ogrenciler[i].numara);
        printf(" Adres:%s\n", ogrenciler[i].adres);
    }

    return 0;
}