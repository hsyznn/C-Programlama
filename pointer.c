#include<stdio.h>
int main(){
	
	int i = 5;
	int *p = &i;
	
	printf("%p\n", p); //Hexadecimal format�nda veriyor
	printf("%u\n", p); //Decimal format�nda veriyor.
	
	printf("%d", *p);
	
	//& i�areti adres bilgisini veriyor.
	//* i�areti adresteki de�eri veriyor
	
	
	return 0;
}
