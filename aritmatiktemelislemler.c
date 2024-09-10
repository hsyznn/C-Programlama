#include <stdio.h>
int main(){
	/*
	x+y ----> x ile y'yi toplar
	x-y ----> x ile y'yi çýkarýr
	x*y ----> x ile y'yi çarpar
	x/y ----> x ile y'yi böler
	
	x%y ----> x'in y ile bölümünden kalaný verir
	
	+x  ----> x ile artýyý çarpar(sonuç deðiþmez)
	-x  ----> x ile eksiyi çarpar(X pozitif(+) ise sonuç negatif(-), X negatif(-) ise sonuç pozitif(+) olur)
	*/
	
	int x = 1;
	int x1 = -1;
	
	printf("%.1f\n", 10.3+5.5); //15.8 çýktý
	printf("%d\n", 10-6);    //4 çýktý
	printf("%.2f\n", 10.1*4.3);//43.43 çýktý
	printf("%d\n", 10/6);//1 çýktý
	printf("%d\n", 10%6);//4 çýktý
	
	printf("%d\n",-x);// -1 çýktý
	printf("%d\n",-x1);// 1 çýktý
	return 0;
}
