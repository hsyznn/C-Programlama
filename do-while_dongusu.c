#include <stdio.h>
int main(){
	
	int n,hane=0,toplam=0;
	
	printf("Sayiyi giriniz:");
	scanf("%d",&n);
	
	do{
		toplam += (n%10);
		
		hane ++;
		
		n = n / 10; //hane sürekli artacaðýndan sayiyi azaltmamýz lazým.		
		
	}
	while (n > 0);
	
	printf("Rakamlarin toplami %d %d'dir'",hane,toplam);
	
	//Do While çok tercih edilmiyor. 
	
	
	return 0;
}
