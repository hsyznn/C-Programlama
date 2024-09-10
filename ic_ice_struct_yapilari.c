#include<stdio.h>
#include<string.h>
struct Adress{
	
	char Mahalle[20];
	
	char cadde [20];
	
	char sokak [20];	
};

struct ogrenci{
	
	char isim [20];
	
	char soyisim [20];
	
	int yas;
	
	int numara;
	
	struct Adress adress;	
};

int main(){
	
	struct ogrenci ogrenci1;
	
	
	//ogrenci1.isim = "Hüseyin" yazýmý yanlýþtýr. Char arrayleri birbirine eþitlenmiyor.
	
	strcpy(ogrenci1.isim,"Huseyin");
	strcpy(ogrenci1.soyisim,"Ozen");
	ogrenci1.yas = 22;
	ogrenci1.numara = 274;
	strcpy(ogrenci1.adress.cadde,"Abdi Ipekci");
	strcpy(ogrenci1.adress.Mahalle,"Yenidogan");
	strcpy(ogrenci1.adress.sokak,"Ulubatli");
	
	printf("Isim:%s, Soyisim:%s, Yas:%d, Numara:%d\n\n\tAdres Bilgisi\n\nCadde:%s, Mahalle:%s, Sokak:%s",
	ogrenci1.isim, ogrenci1.soyisim, ogrenci1.yas, ogrenci1.numara,
	ogrenci1.adress.cadde, ogrenci1.adress.Mahalle, ogrenci1.adress.sokak);	
	
	return 0;
}
