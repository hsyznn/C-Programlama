#include <stdio.h>
int main(){
	/*
	x+y ----> x ile y'yi toplar
	x-y ----> x ile y'yi ��kar�r
	x*y ----> x ile y'yi �arpar
	x/y ----> x ile y'yi b�ler
	
	x%y ----> x'in y ile b�l�m�nden kalan� verir
	
	+x  ----> x ile art�y� �arpar(sonu� de�i�mez)
	-x  ----> x ile eksiyi �arpar(X pozitif(+) ise sonu� negatif(-), X negatif(-) ise sonu� pozitif(+) olur)
	*/
	
	int x = 1;
	int x1 = -1;
	
	printf("%.1f\n", 10.3+5.5); //15.8 ��kt�
	printf("%d\n", 10-6);    //4 ��kt�
	printf("%.2f\n", 10.1*4.3);//43.43 ��kt�
	printf("%d\n", 10/6);//1 ��kt�
	printf("%d\n", 10%6);//4 ��kt�
	
	printf("%d\n",-x);// -1 ��kt�
	printf("%d\n",-x1);// 1 ��kt�
	return 0;
}
