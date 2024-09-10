#include <stdio.h>
int main(){
	int sayi1;
	printf("Sayinizi Giriniz:");
	scanf("%d",&sayi1);
	if(sayi1 % 2 == 0){
			
		printf("%d sayisi cifttir", sayi1);
	}
	
	else{
		
		printf("%d sayisi tektir",sayi1);
	}	
	
	
	
	return 0;
}
