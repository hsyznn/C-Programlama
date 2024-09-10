#include<stdio.h>
#include<string.h>
/*
int main(){
	
	char yazi[]="tura";
	
	char *p = yazi; //0'ıncı indeksten başlar.	
	
	printf("%s\n", p);
	printf("%s", p+1);
	
  return 0
}
*/

int benimstrlen(char *p){
	
	int uzunluk = 0;
	
	int i = 0;
	
	for(; p[i] != '\0'; i++){
		
		uzunluk++;
		
	}
	
	return uzunluk;
	
}

int main(){
	
	char yazi[] = "tura";
	
	printf("%d\n",benimstrlen(yazi));//4 çıktısını verir.
	
	printf("%d\n",benimstrlen(yazi+1));//3 çıktısını verir çünkü 't' indeksini atlar.
	
	printf("%s",yazi);
	
	return 0;
}




