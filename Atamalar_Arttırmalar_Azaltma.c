#include <stdio.h>
int main(){
	
	/*
	De�i�ken(variable)=ifade(expression)
	int x = 6;
	int y = 7;
	
	x=y; (y'nin de�eri x'e atan�yor. x=7, y=7,)
	y= x+1 (x+1 hesaplan�yor(8) ve y'ye at�l�yor. x=7, y=8)
	
	x=x+1;
	Atama durumunda ilk ba�ta sa� taraftaki k�s�m hesaplan�r. Sonra atama yap�l�r.
	
	x+1 =2; (bu t�r �eyler C'de ge�erli de�ildir. sol taraftaki de�er saf bir de�i�ken olmal�. x,y,c,a,b gibi)
	
	Do�ru Kullan�m: x=1;
	
	Artt�rma ve Azatlma ��lemleri
	
	i=i+1 (bunun e�iti ayn� zamanda i += 1'dir.)
	
	De�i�ken(variable) i�lem=ifade(expression)
	
	C'de pratik bir y�ntem var. �steki i�lem i'yi art�r�r. i'yi artt�rmak i�in C'de i++ ve ++i gibi �eyler bulunuyor.
	
	postfix = ++i;
	prefix  = i++;
	aras�ndaki fark:
	
	int i = 4;
	
	printf("%d",++i); ekrana 4 say�s�n� bast�r�r. 
	
	Postfix halinde (++i) i'nin artt�rmadan �nceki de�erini (4) kullan�l�yor. bir sonraki sat�rda art�r�yor.
	
	printf("%d",i++); ekrana 5 say�s�n� bast�r�r.
	
	Prefix halinde (++i) i'nin artm�� de�erini kullan�yor (5). bir sonraki sat�rda artt�r�yor. 
	
	--i ve i-- ayn� �ekilde �al���r.
	
	De�i�ken (Variable) i�lem= ifade(expression) biraz a�arsak
	
	i = i%a;
	
	bu formaya sokmaya �al��al�m. i %= a;
	
	�rnek: i = i * (a+1); e�iti ----> i *= a+1;
	
	
	
	�� i�e atamalar
	
	i=j=k=0
	
	Bu �ekilde bir atama varsa en sa�dan ba�layarak k'ya 0 at�yor yani k=0. Daha snra j'ye k'n�n de�erini at�yor(0).
	Daha sonra i'ye j'nin de�erini at�yor. i=0 oldu. Sonu� olarak en sa�dan ba�layarak yap�lan atamalar sonucunda;
	
	i = 0;
	j = 0;
	k = 0;
	
	Bu �ekilde atamalarda en sa�dan ba�layarak i�lemler yap�l�r.(Programc�lar bunun �ok daha karma��k versiyonlar�n� tercih etmezler)
	*/
	/*
	int x = 5;
	int y = 7;
	int a = 2;
	
	x=y; //Atamalarda sa�dan sola oldu�undan X (7) de�erini al�r�.
	y = x + a + 1; // X'in de�eri (7) oldu�undan ve a'n�n de�eri (2) oldu�undan 2+7+1 �eklinde olur. Y'nin de�eri burada 10'dur;
	
	printf("x:%d\ny:%d\na:%d", x,y,a); //x:7 y: 10 a:2 ��kt�s�n� ekrana bast�r�r.
	*/
	
	int x = 4;
	int y = 5;
	int a = 6;
	
	printf("x:%d,y:%d,a:%d\n", --x,++y,a++); //x:3,y:6,a:6 ��kt�s�n� veriri.
	printf("x:%d,y:%d,a:%d\n", x,y,a); // x:3, y:6, a:7 ��kt�s�n� verir.
	printf("x:%d,y:%d,a:%d\n", x--,--y,a--); // x:3, y:5, a:7 ��kt�s�n� verir.
  //printf("x:%d,y:%d,a:%d\n", x,y,a); // x:2, y:5, a:6 ��kt�s�n� verir.
	
	/*
	yukar�adaki i�leme g�re:
	
	X=2 a=6 olacakt�r.
	
	x = x + (a+1); �eklinde ifade edilebilir.
	
	*/
	
	x += a+1;
	
	printf("x:%d\n", x);	
	
	//�� i�e atamalar �rnek
	
	x=y=a+4;
	
	printf("x:%d, y:%d, a:%d", x,y,a);
	
	return 0;
}
