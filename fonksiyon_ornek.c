#include<stdio.h>
int asal_mi(int sayi){
	
	int i;
	
	for( i = 2; i < sayi; i++ ){
	
		if ( sayi % i == 0 ){
			
			return 0; //d�ng� sa�lan�rsa e�er return 0 a��a��da bulunan hi� bir kodu okumaz.
		}
		
	}
	return 1; //d�ng� sa�lanmazsa i�lemin devam etmesi i�in return 1 konur.
}


int main(){
	
	
	
	
	int n;
	
	
	printf("bir sayi giriniz:");
	scanf("%d",&n);
	
	
	if(asal_mi(n) == 0){
		
		printf("Girdiginiz sayi Asal degildir.");
		
	}
	
	else{
		
		printf("girdiginiz sayi Asal'dir");
	}
	
	
	return 0;
}
