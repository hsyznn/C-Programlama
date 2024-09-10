#include<stdio.h>
int main(){
	
	int islem;
	float numara1, numara2, sonuc;
		
	printf("1.sayiyi giriniz:");
	scanf("%f", &numara1);
	printf("2.sayiyi giriniz:");
	scanf("%f", &numara2);
	
	printf("\nIslemler\n\n1:toplama\n2:Cikarma\n3:Bolme\n4:Carpma\n5:Kalan hesaplama\n\n");
	printf("Islem seciniz:");
	scanf("%d", &islem);

	
	switch(islem){
		
		case 1:
			printf("1.Sayi:%.2f, 2.sayi:%.2f\n", numara1, numara2);
			sonuc = numara1 + numara2;
			printf("Sonuc: %.2f", sonuc);
			break;
		case 2:
			printf("1.Sayi:%.2f, 2.sayi:%.2f\n", numara1, numara2);
			sonuc = numara1 - numara2;
			printf("Sonuc: %.2f", sonuc);
			break;
		case 3:
			printf("1.Sayi: %.2f, 2.sayi: %.2f\n", numara1, numara2);
			sonuc = numara1 / numara2;
			printf("Sonuc: %.2f", sonuc);
			break;
		case 4:
			printf("1.Sayi: %.2f, 2.sayi: %.2f\n", numara1, numara2);
			sonuc = numara1 * numara2;
			printf("Sonuc: %.2f", sonuc);
			break;
		case 5:
			// % operatörü sadece tamsayýlar üzerinde çalýþýr. 
			printf("1.Sayi: %.2f, 2.sayi: %.2f\n", numara1, numara2);
			printf("Sonuc: %d", (int)numara1 % (int)numara2);
			break;
		default:
			printf("Yanlýs islem ");
			break;
	}
	
	return 0;
}
