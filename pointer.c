#include<stdio.h>
int main(){
	
	int i = 5;
	int *p = &i;
	
	printf("%p\n", p); //Hexadecimal formatýnda veriyor
	printf("%u\n", p); //Decimal formatýnda veriyor.
	
	printf("%d", *p);
	
	//& iþareti adres bilgisini veriyor.
	//* iþareti adresteki deðeri veriyor
	
	
	return 0;
}
