#include<stdio.h>
/*
int main(){
	
	
	int sayilar [5] = {1,2,3,4,8};
	
	int *p = sayilar; // ---> &sayilar[0] �eklinde de g�sterilir. �lk eleman� belirtir.
	
	printf("%u\n",p+0);
	printf("%u\n",p+1);
	printf("%u\n",p+2);
	printf("%u\n",p+3);
	printf("%u\n",p+4);
	
	�eklinde ve ya *(p+1) g�sterimler offset'dir. Do�ru kullan�m� p[istenilen dizinin say�s�]'d�r.
	
	Offset= bir h�creden belirli say�da h�cre sa�a ve a�a��ya gitmemizi sa�layan komuttur
	
		
	printf("%u\n",p[0]);
	printf("%u\n",p[1]);
	printf("%u\n",p[2]);
	printf("%u\n",p[3]);
	printf("%u\n",p[4]);
	
	*/
	
	/*

int max(int a[], int size){ //size yaz�lmas� zorunlu de�ildir.	
	
	int maks = a[0];
	
	for( int i = 1; i < size; i++ ){
		
		if (a[i] > size){
			
			maks = a[i];
			
		}	
	
	}
		
	return maks;
}

Pointer olmadan fonksiyon kullan�m� 
*/

int max(int *a, int size){ //size yaz�lmas� zorunlu de�ildir.	
	
	int maks = a[0];
	
	for( int i = 1; i < size; i++ ){
		
		if (a[i] > size){
			
			maks = a[i];
			
		}	
	
	}
		
	return maks;
}

//Pointerl� kullan�m�.

int main (){
	
	int sayilar[5] = {1,5,20,30,100};
	
	int maks = max(sayilar,5);
	
	printf("Sayilar Dizisini en buyuk elemani %d'dir", maks);
	
	return 0;
}
	
	

