#include <stdio.h>
int main(){
	
	/*
	Deðiþken(variable)=ifade(expression)
	int x = 6;
	int y = 7;
	
	x=y; (y'nin deðeri x'e atanýyor. x=7, y=7,)
	y= x+1 (x+1 hesaplanýyor(8) ve y'ye atýlýyor. x=7, y=8)
	
	x=x+1;
	Atama durumunda ilk baþta sað taraftaki kýsým hesaplanýr. Sonra atama yapýlýr.
	
	x+1 =2; (bu tür þeyler C'de geçerli deðildir. sol taraftaki deðer saf bir deðiþken olmalý. x,y,c,a,b gibi)
	
	Doðru Kullaným: x=1;
	
	Arttýrma ve Azatlma Ýþlemleri
	
	i=i+1 (bunun eþiti ayný zamanda i += 1'dir.)
	
	Deðiþken(variable) iþlem=ifade(expression)
	
	C'de pratik bir yöntem var. Üsteki iþlem i'yi artýrýr. i'yi arttýrmak için C'de i++ ve ++i gibi þeyler bulunuyor.
	
	postfix = ++i;
	prefix  = i++;
	arasýndaki fark:
	
	int i = 4;
	
	printf("%d",++i); ekrana 4 sayýsýný bastýrýr. 
	
	Postfix halinde (++i) i'nin arttýrmadan önceki deðerini (4) kullanýlýyor. bir sonraki satýrda artýrýyor.
	
	printf("%d",i++); ekrana 5 sayýsýný bastýrýr.
	
	Prefix halinde (++i) i'nin artmýþ deðerini kullanýyor (5). bir sonraki satýrda arttýrýyor. 
	
	--i ve i-- ayný þekilde çalýþýr.
	
	Deðiþken (Variable) iþlem= ifade(expression) biraz açarsak
	
	i = i%a;
	
	bu formaya sokmaya çalýþalým. i %= a;
	
	Örnek: i = i * (a+1); eþiti ----> i *= a+1;
	
	
	
	Ýç içe atamalar
	
	i=j=k=0
	
	Bu þekilde bir atama varsa en saðdan baþlayarak k'ya 0 atýyor yani k=0. Daha snra j'ye k'nýn deðerini atýyor(0).
	Daha sonra i'ye j'nin deðerini atýyor. i=0 oldu. Sonuç olarak en saðdan baþlayarak yapýlan atamalar sonucunda;
	
	i = 0;
	j = 0;
	k = 0;
	
	Bu þekilde atamalarda en saðdan baþlayarak iþlemler yapýlýr.(Programcýlar bunun çok daha karmaþýk versiyonlarýný tercih etmezler)
	*/
	/*
	int x = 5;
	int y = 7;
	int a = 2;
	
	x=y; //Atamalarda saðdan sola olduðundan X (7) deðerini alýrý.
	y = x + a + 1; // X'in deðeri (7) olduðundan ve a'nýn deðeri (2) olduðundan 2+7+1 þeklinde olur. Y'nin deðeri burada 10'dur;
	
	printf("x:%d\ny:%d\na:%d", x,y,a); //x:7 y: 10 a:2 çýktýsýný ekrana bastýrýr.
	*/
	
	int x = 4;
	int y = 5;
	int a = 6;
	
	printf("x:%d,y:%d,a:%d\n", --x,++y,a++); //x:3,y:6,a:6 çýktýsýný veriri.
	printf("x:%d,y:%d,a:%d\n", x,y,a); // x:3, y:6, a:7 çýktýsýný verir.
	printf("x:%d,y:%d,a:%d\n", x--,--y,a--); // x:3, y:5, a:7 çýktýsýný verir.
  //printf("x:%d,y:%d,a:%d\n", x,y,a); // x:2, y:5, a:6 çýktýsýný verir.
	
	/*
	yukarýadaki iþleme göre:
	
	X=2 a=6 olacaktýr.
	
	x = x + (a+1); þeklinde ifade edilebilir.
	
	*/
	
	x += a+1;
	
	printf("x:%d\n", x);	
	
	//Ýç içe atamalar örnek
	
	x=y=a+4;
	
	printf("x:%d, y:%d, a:%d", x,y,a);
	
	return 0;
}
