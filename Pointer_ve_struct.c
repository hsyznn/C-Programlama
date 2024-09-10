#include<stdio.h>
#include<string.h>

struct ogrenci{
	
	char isim [20];
	
	char soyisim [20];
	
	int numara;
	
};

int main(){
	
	struct ogrenci ogrenci1;
	
	struct ogrenci *tut;
	
	strcpy(ogrenci1.isim,"Huseyin");
	strcpy(ogrenci1.soyisim,"Ozen");
	ogrenci1.numara = 274;

	tut = &ogrenci1;
	
	printf("%s, %s, %d\n", ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara);
	
	printf("%s, %s, %d", tut->isim, tut->soyisim, tut->numara);
	
	// *tut.isim == tut -> isim ayný gösterimdir.	
	
	
}
