#include<stdio.h>
#include<string.h>

struct ogrenci{
	
	char isim[20];
	
	char soyisim[20];
	
	int numara;
};

void degerAl(struct ogrenci *p){
	
	strcpy(p->isim,"Huseyin");
	strcpy(p->soyisim,"Ozen");
	p->numara = 274;
	
}

void goster (struct ogrenci *p){
	
	printf("Ogrencinin Bilgileri\nIsim:%s\nSoyisim:%s\nNumarasý:%d");
	
}

int main(){
	
	struct ogrenci ogrenci1 ={"Berat", "Yenidoan", 1041	};
	
	degerAl(&ogrenci1);
	
	printf("%s,%s,%d",ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara);		
	
	return 0;
}
