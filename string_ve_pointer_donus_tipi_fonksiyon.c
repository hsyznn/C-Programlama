#include<string.h>
#include<stdio.h>

char *dondurme(char *p,int indeks){
	
	int uzunluk = strlen(p);
	
	if ( indeks > uzunluk){
		
		return NULL;
		
	}
	
	else {
		
		
		
		return p+indeks;
	}
}


int main(){
	
	char dizi[] = "yazilim";
	
	char *p = dondurme(dizi,3);
	
	if( p == NULL){
		
		printf("NULL de�er");		
	}
	else{
		
		printf("%s", p);
		
		
	}
	
	
	
	
	
	return 0;
}
