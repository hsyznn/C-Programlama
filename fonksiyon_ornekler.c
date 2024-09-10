#include<stdio.h>

void tekcift(int sayi1){
	
	if(sayi1 % 2 == 0){
		
		printf("Sayi çift");
	}
	
	else{
		
		printf("Sayi Tek");
			
	}
}

int fakt(int sayi1){
	
	int i;
	int faktoriyel = 1;
	
	for(i = 1; i < sayi1; i++ ){
		
		faktoriyel =faktoriyel*i;
			
	}
	
	return (faktoriyel = faktoriyel *i);
	
}

float picarp(int sayi1){
	

	
	return(sayi1*3.14);
	
}



int main(){
	
	int sayi;
	int secim;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	printf("\nBir islem seciniz\n");
	printf("\n1:Tek mi Cift mi\n2:Faktoriyelini bul\n3:Pi sayisi ile carpimi\nIslem:");
	scanf("%d",&secim);
	
	switch(secim){
		
		case 1:
		
		tekcift(sayi);
		
		break;
		
		case 2:
		
		printf("%d", fakt(sayi));
			
		break;
		
		case 3:
			
		printf("%f",picarp(sayi));
		
		break;
		
		default:
		
		printf("Geçersiz iþlem yaptýnýz:");
		
		break;
		
	}
	
	return 0;
	
}
