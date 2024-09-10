#include <stdio.h>
/*

int carp (int matris[], int size){ //Array boyut bilgisini taþýmaz.
	
	int carpim = 1;
	
	int i = 0;
	
	for (; i < size; i++){
		
		carpim *= matris[i];
		
	}
	
	return carpim;
	
}

int main(){
	
	
	int sayilar[5] = {1,2,3,4,5};
	
	printf("%d", carp(sayilar,5)); // 5 burada boyut bilgisini verir 
		
	return 0;
}
*/
void bastir(int matrisimiz[][4], int size){ //çift boyutlu arraylerde 2.boyut bilgisini kendimiz yazýyoruz. Size ile 1. boyutu kendimiz ek olarak göndereceðiz.

	int i,j;
	
	for(i=0;i < size; i++){
		
		for(j = 0; j < 4; j++){
			
			printf("%d ",matrisimiz[i][j]);
			
		}
		
		printf("\n");	
	}
}
int main(){
	
	
	int matris[3][4];
	
	int i,j;
	
	printf("Matris'i doldurunuz:");
	
	for(i = 0; i < 3 ; i++){
		
		for(j = 0; j < 4; j++){
		
		scanf("%d",&matris[i][j]);	
		
		}
		
	}
	
	bastir(matris,3);
	
	return 0;

}








