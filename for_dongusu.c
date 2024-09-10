#include <stdio.h>
int main(){
	
	/*
	int i;
	
	for(i = 0; i < 10; i++){
		
		printf("i:%d ",i);
		
	}
	
	*/
	
	/*
	int i;
	int j;
	
	for (i = 0, j = 1; i < 10 && j < 5; i++,j++){
		
		
		printf("i:%d j:%d\n", i,j);
	}
	*/
	/*
	
	int i;
	int j;
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < 3; j++){
			
			printf("i:%d j:%d\n", i,j);
			
		}
		
	}	
	
	*/
	
	int ilksayi=1;
	int ikincisayi=1;
	int i;
	
	printf("%d\n%d\n", ilksayi,ikincisayi);
	
	for(i=0;i<15;i++){
		
		int temp = ikincisayi;
		ikincisayi += ilksayi;
		ilksayi = temp;
		
		printf("%d\n", ikincisayi);
		
		
	}
	//fibonacci dizisi yapan program
	
	return 0;
}
