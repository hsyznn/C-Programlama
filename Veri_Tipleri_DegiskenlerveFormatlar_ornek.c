#include<stdio.h>
int main(){
	int a1= 42;
	char b1= 66;
	char b2= 'B';
	float c1= 4.2;
	double d1= 0.21;
	printf("%d %c %d %f %f %s\n",a1,b1,b2,c1,d1,"Hello World"); // 42 B 66 4.200000 0.210000 Hello World olarak ��kt� verir.
	//Float ve Double'deki 0'lar�n g�z�kmemesi i�in %.1f fonksiyonu kullan�l�r.
    //printf("%d %c %d %.1f %.2f %s",a1,b1,b2,c1,d1,"Hello World"); //42 B 66 4.2 0.21 Hello World olarak ��kt� verir.
	//Ekstra bilgi: %10d ya da %5d fonksiyonu bo�luk ekler. %10d 10 tane bo�luk b�rakarak yaz demektir.
	//printf("%10d %c %5d %.1f %.2f %s",a1,b1,b2,c1,d1,"Hello World"); //        42 B    66 4.2 0.21 Hello World ��kt�s�n� verir.
	
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	
	
	return 0;
}
