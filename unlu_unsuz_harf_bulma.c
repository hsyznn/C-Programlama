#include<stdio.h>
int main(){
	
	int harf1, harf2;
	char unlu;
	
	printf("Harf giriniz:");
	
	scanf("%c",&unlu);
	
	harf1 = (unlu =='a' || unlu == 'e' || unlu == 'i' || unlu == 'o' || unlu == 'u');	
	harf2 = (unlu == 'A' || unlu == 'E' || unlu == 'I' || unlu == 'O' || unlu == 'U');
	
	if (harf1 || harf2){
		
		printf("%c unlu'dur'",unlu);
	}
	else{
		
		printf("%c girdiginiz harf unsuzdur", unlu);
	}
	
	
	return 0;
}
