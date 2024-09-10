#include <stdio.h>

int main(){
	
	/*
	Tip D�n���mleri
	
	Otomatk D�n���mler: Bir aritmatik ifadede b�t�n tipler ayn� de�il. Mesela 3.2/2 dedi�imiz zaman Float ve int beraber oluyor.
	Burada sonu� 1.6 ��nk� otomatik d�n���m yap�l�yor. (2 say�s� float'a �evrilip 2.0 oluyor)
	
	Otomatik D�n���m �izelgesi
	
	Char
	Short -------> int -------> Float ------> double -----> long
															Double
															
	Mesela int ve Double beraberse herkes Double'a otomatik �evrilir. (Sa�a do�ru �nc�l�k art�yor.)
	
	Manuel D�n���mler
	
	Otomatik d�n���mlerin olmad��� yerlerde kendimiz yapabiliriz.
	
	3.2 say�s�n� int yapmak i�in ---> (int) 3.2 ----> 3 sonucunu verir. (kesirli k�sm� atar)
	*/
	
	int x = 3 ;
	float y = 0.1; 
	
	printf("%f\n", x/y); //Ekrana 30.000000 ��kt�s�n� basar.
	printf("%f\n", 2*4.2 + 4%2); //Ekrana 8.400000 ��kt�s�n� basar.
	printf("%f\n", 12.5/2); //Ekrana 6.250000 ��kt�s�n� basar.
	printf("%d\n", (int)3.2); //Ekrana 3 ��kt�s�n basar.
	printf("%f\n", (float)3); //Ekrana 3.000000 ��kt�s�n� basar.
	
	
	
	
	return 0;
}
