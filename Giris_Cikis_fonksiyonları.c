# include<stdio.h>
# define PI 3.14 //C'de sabitlemek i�in define kullan�l�yor. Kodda PI g�z�ken yer 3.14 demektir.
int main(){
	
	/*
	Giri�-��k�� Fonksiyonlar�
	
	Printf ve Scanf
	
	Float bir de�er olan X'i ekrana bast�rmak i�in printf("%f",x); �eklinde yap�yoruz.
	Float olan bir x tan�mlay�p daha sonra bu de�eri kullanc�dan almak istersek de scanf("%f",&x) �eklinde yaz�yoruz.
	"&" i�areti X'e kullan�c�dan glen de�eri atad���m�z� g�sterir. Di�er formatlar prinf ile ayn�d�r.
	
	Scanf giri� fonksiyonudur.
	
	*/
	int yaricap;
	float hacim;
	
	printf("K�renin yar��ap�n� giriniz:");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap); //k�s�ratl� bir say� ��kmas�n� istedi�imiz i�in 4/3.0 yap�yoruz. Birini float b�rakarak di�erini de float'a �eviriyoruz.
	printf("K�renin hacmi:%.2f'dir", hacim);	
	
	
	return 0;
}
