#include<stdio.h>
int main(){
	/*
	-x, x+y*z, (x/7)*y, (a%b)-(x*a+1), 3+4*7 ifadeler aritmatik ifadelerdir.
	
	Tekli operat�rler; (+) (-) (-x+x) 1.�ncelik sa�dan sola 
	�kili operat�rler; *,/,% 2.�ncelik  kendi aralar�nda soldan sa�a
	�kili operat�rler; +, - 3.�ncelik kendi aralar�nda soldan sa�
	
	parantez i�leri her zaman �ncelikli
	*/
	
	printf("%d\n",2-3+4); // 2-3=-1+4=3
	printf("%d\n",2*3-4); // 2*3=6-4=2
	printf("%d\n",2-3/4); // 3/4=0+2=2
	printf("%d\n",2+3%4); // 3%4=3+2=5
	printf("%d\n",2/3*4); // 2/3=0*4=0
	printf("%d\n",2%3/4); // 2%3=2/4=0
	printf("%d\n",-2+3); // 1
	printf("%d\n",-2*-3); // 6
	printf("%d\n",(2+3)%4); // (2+3=5)5%4=1
	
	
	
	return 0;
}
