#include<stdio.h>
int asal_mi(int sayi){
	
	int i;
	
	for( i = 2; i < sayi; i++ ){
	
		if ( sayi % i == 0 ){
			
			return 0; //döngü saðlanýrsa eðer return 0 aþþaðýda bulunan hiç bir kodu okumaz.
		}
		
	}
	return 1; //döngü saðlanmazsa iþlemin devam etmesi için return 1 konur.
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
