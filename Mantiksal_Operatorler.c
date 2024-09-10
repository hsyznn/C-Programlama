#include <stdio.h>
int main(){
	/*
	Bool Veritipi(True ya da False)
	
	Mantýksal ifadeler doðru ise true
	Mantýksal ifadeler yanlýþ ise false
	
	Ayný zamanda bütün "0" sýfýr olmayan sayýlar(1,32,1234523vs.) true deðer sayýlýr.
	0 ise false sayýlýr.
	
	Mantýksal Operatörler
	
	< -----> küçük müdür a<b þeklinde gösterilir
	>------> büyük müdür a>b þeklinde gösterilir
	<= ------> küçük yada eþit midir a<=b þeklinde gösterilir.
	>= ------> büyük yada eþit midir a>=b þeklinde gösterilir.
	== ------> eþit midir a==b þeklinde gösterilir.
	!= ------> eþit deðil midir a!=b þeklinde gösterilir.
	
	
	Mantýksal Baðlaçlar
	
	Bir çok mantýksal ifadeyi iþlemi baðlayan araçlardýr.
	&& ----> Mantýksal and("ve") baðlacý. true && true && false gibi baðlanabailir. 
	Ýfadelerin true olmasý gerekir. Bu cümlenin içinde bir tane bile false varsa mantýksal cümle false olur.
	|| ----> Mantýksal or("ya da ") baðlacý. true // true // false gibi baðlanabilir.
	|| olduðu cümlenin true olmasý için en az bir ifadenin true olmasý gerekir. Yanlýþ olan (false) mantýksal ifadeyi (true) yapar.
	! -----> Mantýksal not("deðil") operatörü. Doðru olan (true) mantýksal ifadeyi yanlýþ (false) yapar.
	Yanlýþ (false) olan mantýksal ifadeyi doðru(true) yapar.
	
	Þartlý cümleler
	
	a = x > y ? x: y:
	*/
	
	/*
	
	int a = 40;
	int b = 41;
	
	a > b; false
	a < b; true
	a >= b;false
	a <= b;true
	a != b;true
	a == b;false
	
	*/
	
	/*
	
	
	int a = 40;
	int b = 50;
	int c = 60;
	int d = 70;
	
	a > c && c <= d && ( a>b || b < d) = Öncelik parantez içidir. Genel ifade && ("ve") ile baðlandýðýndan false olacaktýr.
	
	!(a >= d) = ! ("deðil") baðlacý mantýksal cümle False ise True, True ise False yapar.
	Bu cümle False idir ama ! ("deðil") ifadesi olduðundan True olacaktýr.
	
	*/
	
	int a,b=20, c=30;
	
	a = b < c ? b: c;
	
	printf("%d", a); 
	
	// çýktýsý 20 olacaktýr çünkü a = b < c ? b: c; ifadeside b < c'den küçük olduðundan çýktý 20 olacaktýr. 
	
	
	
	return 0;
}
