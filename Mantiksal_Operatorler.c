#include <stdio.h>
int main(){
	/*
	Bool Veritipi(True ya da False)
	
	Mant�ksal ifadeler do�ru ise true
	Mant�ksal ifadeler yanl�� ise false
	
	Ayn� zamanda b�t�n "0" s�f�r olmayan say�lar(1,32,1234523vs.) true de�er say�l�r.
	0 ise false say�l�r.
	
	Mant�ksal Operat�rler
	
	< -----> k���k m�d�r a<b �eklinde g�sterilir
	>------> b�y�k m�d�r a>b �eklinde g�sterilir
	<= ------> k���k yada e�it midir a<=b �eklinde g�sterilir.
	>= ------> b�y�k yada e�it midir a>=b �eklinde g�sterilir.
	== ------> e�it midir a==b �eklinde g�sterilir.
	!= ------> e�it de�il midir a!=b �eklinde g�sterilir.
	
	
	Mant�ksal Ba�la�lar
	
	Bir �ok mant�ksal ifadeyi i�lemi ba�layan ara�lard�r.
	&& ----> Mant�ksal and("ve") ba�lac�. true && true && false gibi ba�lanabailir. 
	�fadelerin true olmas� gerekir. Bu c�mlenin i�inde bir tane bile false varsa mant�ksal c�mle false olur.
	|| ----> Mant�ksal or("ya da ") ba�lac�. true // true // false gibi ba�lanabilir.
	|| oldu�u c�mlenin true olmas� i�in en az bir ifadenin true olmas� gerekir. Yanl�� olan (false) mant�ksal ifadeyi (true) yapar.
	! -----> Mant�ksal not("de�il") operat�r�. Do�ru olan (true) mant�ksal ifadeyi yanl�� (false) yapar.
	Yanl�� (false) olan mant�ksal ifadeyi do�ru(true) yapar.
	
	�artl� c�mleler
	
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
	
	a > c && c <= d && ( a>b || b < d) = �ncelik parantez i�idir. Genel ifade && ("ve") ile ba�land���ndan false olacakt�r.
	
	!(a >= d) = ! ("de�il") ba�lac� mant�ksal c�mle False ise True, True ise False yapar.
	Bu c�mle False idir ama ! ("de�il") ifadesi oldu�undan True olacakt�r.
	
	*/
	
	int a,b=20, c=30;
	
	a = b < c ? b: c;
	
	printf("%d", a); 
	
	// ��kt�s� 20 olacakt�r ��nk� a = b < c ? b: c; ifadeside b < c'den k���k oldu�undan ��kt� 20 olacakt�r. 
	
	
	
	return 0;
}
