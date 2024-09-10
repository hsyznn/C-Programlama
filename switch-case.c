#include <stdio.h>
int main(){
	
	int tutar,islem,bakiye = 10000;
	
	printf("Islemler\n1:Para cekme\n2:Para yatırma\n3:Havale yapma\n4:Bakiye sorgulama\n5:Kart iade\n\n\n");
	printf("Islem seciniz:");
	scanf("%d",&islem);
	
	switch(islem){
		case 1:	
			printf("Bakiyeniz:%d\n\n",bakiye);
			printf("Cekilecek tutari girinz:");
			scanf("%d",&tutar);
			if(tutar > bakiye){
				printf("Yetersiz Bakiye");
			}
			bakiye -= tutar;
			printf("Bakiyeniz:%d",bakiye);
			break;
		case 2:
		printf("Bakiyeniz:%d\n\n",bakiye);
			printf("Yatirilcak tutari girinz:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Bakiyeniz:%d",bakiye);
			break;
		case 3:
				printf("Bakiyeniz:%d\n\n",bakiye);
			printf("Havele yapılacak tutarı giriniz:");
			scanf("%d",&tutar);
			if(tutar > bakiye){
				printf("Yetersiz Bakiye\n");
			
			}
			bakiye -= tutar;
			printf("Bakiyeniz:%d",bakiye);
			break;
		case 4:
			printf("Bakiyeniz:%d",bakiye);
			break;
		case 5:
			printf("Kart Iadesi yapildi.");
			break;
		default:
			printf("Böyle bir secim bulunmamaktadır");	
	}
	return 0;
}
