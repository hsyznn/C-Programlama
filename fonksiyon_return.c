#include<stdio.h>
int faktoriyel(int sayi){
	
	int fact = 1;
	
	for(;sayi > 0; sayi--){ //Döngü deðiþkeni sayi olduðundan deðerimiz belli.
		
		fact *=sayi;
		
	}
	
	return fact;
	
}
void hatayibas(int hata){
	
	printf("Hata kodu:%d",hata);
}

int main(){
	
	int n;
	
	printf("Faktoriyel'ini istediginiz sayiyi giriniz:");
	
	scanf("%d",&n);
	
	if (n < 0){
		
		hatayibas(404);
		
	}
	else{
		
	printf("Faktoriyel:%d",faktoriyel(n));
	
	}
	
	
	return 0;
}
