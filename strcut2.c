#include<stdio.h>
struct Araba{
	
	int tekerleksayisi;
	int vitessayisi;
	int model;
	float motor;
	int beygir;
	
}araba1,araba2; //sonradan kullanabiliriz anlamına geliyor.

int main(){
	
	struct Araba araba1 = {4,6,2011,3.0,300}; //araba1 = {0} ise tüm verileri 0'a eşitler.
	araba2 = araba1;
	
	printf("%d, %d, %d, %.2f, %d\n", araba1.tekerleksayisi,araba1.vitessayisi,araba1.model,araba1.motor,araba1.beygir);
	printf("%d, %d, %d, %.2f, %d", araba2.tekerleksayisi,araba2.vitessayisi,araba2.model,araba2.motor,araba2.beygir);

	return 0;
}
