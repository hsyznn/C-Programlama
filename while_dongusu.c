#include<stdio.h>
int main(){
	
	/*
	int i;
	
	while (i < 10){
		printf("%d - Hello World\n", i);
		
		i++;
		
		
	}
	
	10 defa Hello World yazd�ran program
	*/
	
	
	int n;
	int fact = 1;
	
	printf("Faktoriyelini bulmak istediginiz sayiyi giriniz:");
	scanf("%d",&n);
	
	while(n != 0){ //n de�eri 0 ve 0'a e�it olmayana kadar devam.
		
		printf("%d\n",n);
		
		fact = fact*n;
		
		n--;
		
	}
	
	printf("Girdiginiz sayinin faktoriyeli %d'dir'",fact);
	
	
	
	
	
	
	return 0;
}
