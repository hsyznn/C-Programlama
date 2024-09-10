#include<stdio.h>
int main(){
	
	//Tekli yorum sat�r�.
	
	/*
		�oklu yorum sat�r�.
		Bu ikili aras�na her �ey yaz�labilir.
	
	*/
	
	
	/*
	
	Temel Veri Tipleri:Char,�nt,Float,Double,Short,Long
	Char Veri tipi -1 byte (8  bit) 0'dan 255(2^8) e kadar de�er alabilir. Her biri de�er ASCII  tablosundaki bir de�ere e�de�erdir.
	�nt  Veri tipi -4 byte (32 bit) -2^16'dan 2^16 kadar de�er alabilir. 2,32,45 gibi de�erler int de�erleridir.(Tam say�)
   Short Veri tipi -2 byte (16 bit) -2^8 den 2^8 kadar de�er al�r. �nt ile ayn�d�r sadece de�er aral��� farkl�d�r. 2,32,132 gibi say�lar short ile ifade edilebilir.
   Long  Veri tipi -8 byte (64 bit) -2^32 den 2^32 kadar de�er al�r. �nt ile ayn�d�r sadece de�er aral��� �ok b�y�k say�lar i�in kullan�l�r. 12341234341124,215125125125 gibi say�lar i�in kullan�l�r.
   Float Veri Tipi kesirli say�lar i�in kullan�l�r. Byte i�letim sistemine g�re de�i�ir. 2.34,3.4 gibi de�erler i�in kullan�l�r.
  Double Veri Tipi kesirli say�lar i�in kullan�l�r. Float ile ayn� i�levi g�r�r. Byte i�letim sistemine g�re de�i�ir ve Float'tan daha kapsaml�d�r. 2.1313131341441324, 4.123123124125 gibi de�erler i�in idealdir.
  
  En �ok kullan�lan veri tipleri Char,int,float ve double'dir.
  */
  
  /*
    De�i�ken tan�mlama
    Veri Tipleri de�i�ken ad�;
  */
  
  /*
  
  Format Belirleyiciler:
  %d ------> int de�erleri i�in kullan�l�r.
  �rnek:
  int x = 5; 
  printf("%d",x); ----> ekrana 5 de�erini basar
  
  %f ------> float, double de�erleri i�in kullan�l�r.
  �rnek:
  float f=3.1;
  double d=4.21;
  printf("%f %f", f,d); ------> ekrana 3.1 4.21 �eklinde basar
  
  %c -----> karakterler i�in kullan�l�r.
  �rnek:
  char c1=c;
  printf("%c", c1); ----> ekrana c �eklinde basar
  printf("%d", c1); ----> ekrana c'nin ASCII de�erini basar
	
  %s ----> karakter dizileri i�in kullan�l�r.("Hello World")
  printf("%s", "Hello World"); ----> ekrana Hello World yazar.
  */
	
	
	return 0;
}
