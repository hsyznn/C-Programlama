#include<stdio.h>
#include <stdbool.h>

int main() {
	
	int toplam = 0;
	int sayi;
	int i;
	
	for (i = 0 ; true; i++){
		
		printf("Cikmak icin -1 yaziniz.\nSayi Giriniz:");
		scanf("%d",&sayi);
		
		if(sayi == -1){
			break;
			
		}
		
		toplam += sayi;
		}
	
	printf("%d",toplam);
		
	return 0;	
	}
	
	
	
