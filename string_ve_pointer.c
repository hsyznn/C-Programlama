#include<stdio.h>
#include<string.h>
/*
int main(){
	
	char yazi[]="tura";
	
	char *p = yazi; //0'�nc� indeksten ba�lar.	
	
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
	
	printf("%d\n",benimstrlen(yazi));//4 ��kt�s�n� verir.
	
	printf("%d\n",benimstrlen(yazi+1));//3 ��kt�s�n� verir ��nk� 't' indeksini atlar.
	
	printf("%s",yazi);
	
	return 0;
}




