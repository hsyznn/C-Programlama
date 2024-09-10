#include<stdio.h>
int main(){
	
	//Tekli yorum satýrý.
	
	/*
		çoklu yorum satýrý.
		Bu ikili arasýna her þey yazýlabilir.
	
	*/
	
	
	/*
	
	Temel Veri Tipleri:Char,Ýnt,Float,Double,Short,Long
	Char Veri tipi -1 byte (8  bit) 0'dan 255(2^8) e kadar deðer alabilir. Her biri deðer ASCII  tablosundaki bir deðere eþdeðerdir.
	Ýnt  Veri tipi -4 byte (32 bit) -2^16'dan 2^16 kadar deðer alabilir. 2,32,45 gibi deðerler int deðerleridir.(Tam sayý)
   Short Veri tipi -2 byte (16 bit) -2^8 den 2^8 kadar deðer alýr. Ýnt ile aynýdýr sadece deðer aralýðý farklýdýr. 2,32,132 gibi sayýlar short ile ifade edilebilir.
   Long  Veri tipi -8 byte (64 bit) -2^32 den 2^32 kadar deðer alýr. Ýnt ile aynýdýr sadece deðer aralýðý çok büyük sayýlar için kullanýlýr. 12341234341124,215125125125 gibi sayýlar için kullanýlýr.
   Float Veri Tipi kesirli sayýlar için kullanýlýr. Byte iþletim sistemine göre deðiþir. 2.34,3.4 gibi deðerler için kullanýlýr.
  Double Veri Tipi kesirli sayýlar için kullanýlýr. Float ile ayný iþlevi görür. Byte iþletim sistemine göre deðiþir ve Float'tan daha kapsamlýdýr. 2.1313131341441324, 4.123123124125 gibi deðerler için idealdir.
  
  En çok kullanýlan veri tipleri Char,int,float ve double'dir.
  */
  
  /*
    Deðiþken tanýmlama
    Veri Tipleri deðiþken adý;
  */
  
  /*
  
  Format Belirleyiciler:
  %d ------> int deðerleri için kullanýlýr.
  örnek:
  int x = 5; 
  printf("%d",x); ----> ekrana 5 deðerini basar
  
  %f ------> float, double deðerleri için kullanýlýr.
  örnek:
  float f=3.1;
  double d=4.21;
  printf("%f %f", f,d); ------> ekrana 3.1 4.21 þeklinde basar
  
  %c -----> karakterler için kullanýlýr.
  örnek:
  char c1=c;
  printf("%c", c1); ----> ekrana c þeklinde basar
  printf("%d", c1); ----> ekrana c'nin ASCII deðerini basar
	
  %s ----> karakter dizileri için kullanýlýr.("Hello World")
  printf("%s", "Hello World"); ----> ekrana Hello World yazar.
  */
	
	
	return 0;
}
