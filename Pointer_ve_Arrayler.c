#include<stdio.h>
/*
int main(){
	
	
	int sayilar [5] = {1,2,3,4,8};
	
	int *p = sayilar; // ---> &sayilar[0] þeklinde de gösterilir. Ýlk elemaný belirtir.
	
	printf("%u\n",p+0);
	printf("%u\n",p+1);
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	printf("%u\n",p+4);
	
	Þeklinde ve ya *(p+1) gösterimler offset'dir. Doðru kullanýmý p[istenilen dizinin sayýsý]'dýr.
	
	Offset= bir hücreden belirli sayýda hücre saða ve aþaðýya gitmemizi saðlayan komuttur
	
		
	printf("%u\n",p[0]);
	printf("%u\n",p[1]);
	printf("%u\n",p[2]);
	printf("%u\n",p[3]);
	printf("%u\n",p[4]);
	
	*/
	
	/*

int max(int a[], int size){ //size yazýlmasý zorunlu deðildir.	
	
	int maks = a[0];
	
	for( int i = 1; i < size; i++ ){
		
		if (a[i] > size){
			
			maks = a[i];
			
		}	
	
	}
		
	return maks;
}

Pointer olmadan fonksiyon kullanýmý 
*/

int max(int *a, int size){ //size yazýlmasý zorunlu deðildir.	
	
	int maks = a[0];
	
	for( int i = 1; i < size; i++ ){
		
		if (a[i] > size){
			
			maks = a[i];
			
		}	
	
	}
		
	return maks;
}

//Pointerlý kullanýmý.

int main (){
	
	int sayilar[5] = {1,5,20,30,100};
	
	int maks = max(sayilar,5);
	
	printf("Sayilar Dizisini en buyuk elemani %d'dir", maks);
	
	return 0;
}
	
	

