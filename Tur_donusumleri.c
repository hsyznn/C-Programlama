#include <stdio.h>

int main(){
	
	/*
	Tip Dönüşümleri
	
	Otomatk Dönüşümler: Bir aritmatik ifadede bütün tipler aynı değil. Mesela 3.2/2 dediğimiz zaman Float ve int beraber oluyor.
	Burada sonuç 1.6 çünkü otomatik dönüşüm yapılıyor. (2 sayısı float'a çevrilip 2.0 oluyor)
	
	Otomatik Dönüşüm çizelgesi
	
	Char
	Short -------> int -------> Float ------> double -----> long
															Double
															
	Mesela int ve Double beraberse herkes Double'a otomatik çevrilir. (Sağa doğru öncülük artıyor.)
	
	Manuel Dönüşümler
	
	Otomatik dönüşümlerin olmadığı yerlerde kendimiz yapabiliriz.
	
	3.2 sayısını int yapmak için ---> (int) 3.2 ----> 3 sonucunu verir. (kesirli kısmı atar)
	*/
	
	int x = 3 ;
	float y = 0.1; 
	
	printf("%f\n", x/y); //Ekrana 30.000000 çıktısını basar.
	printf("%f\n", 2*4.2 + 4%2); //Ekrana 8.400000 çıktısını basar.
	printf("%f\n", 12.5/2); //Ekrana 6.250000 çıktısını basar.
	printf("%d\n", (int)3.2); //Ekrana 3 çıktısın basar.
	printf("%f\n", (float)3); //Ekrana 3.000000 çıktısını basar.
	
	
	
	
	return 0;
}
