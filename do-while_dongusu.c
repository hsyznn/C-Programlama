#include <stdio.h>
int main(){
	
	int n,hane=0,toplam=0;
	
	printf("Sayiyi giriniz:");
	scanf("%d",&n);
	
	do{
		toplam += (n%10);
		
		hane ++;
		
		n = n / 10; //hane s�rekli artaca��ndan sayiyi azaltmam�z laz�m.		
		
	}
	while (n > 0);
	
	printf("Rakamlarin toplami %d %d'dir'",hane,toplam);
	
	//Do While �ok tercih edilmiyor. 
	
	
	return 0;
}
