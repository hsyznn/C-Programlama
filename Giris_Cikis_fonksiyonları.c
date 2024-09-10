# include<stdio.h>
# define PI 3.14 //C'de sabitlemek için define kullanýlýyor. Kodda PI gözüken yer 3.14 demektir.
int main(){
	
	/*
	Giriþ-Çýkýþ Fonksiyonlarý
	
	Printf ve Scanf
	
	Float bir deðer olan X'i ekrana bastýrmak için printf("%f",x); þeklinde yapýyoruz.
	Float olan bir x tanýmlayýp daha sonra bu deðeri kullancýdan almak istersek de scanf("%f",&x) þeklinde yazýyoruz.
	"&" iþareti X'e kullanýcýdan glen deðeri atadýðýmýzý gösterir. Diðer formatlar prinf ile aynýdýr.
	
	Scanf giriþ fonksiyonudur.
	
	*/
	int yaricap;
	float hacim;
	
	printf("Kürenin yarýçapýný giriniz:");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap); //küsüratlý bir sayý çýkmasýný istediðimiz için 4/3.0 yapýyoruz. Birini float býrakarak diðerini de float'a çeviriyoruz.
	printf("Kürenin hacmi:%.2f'dir", hacim);	
	
	
	return 0;
}
