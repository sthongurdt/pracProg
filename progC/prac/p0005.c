#include <stdio.h>
#include <stdlib.h>

void main(){

	int i=0;
//------------------------------------------------------------------------------
	printf("\n inicio prueba while \n");
	while(i<=100){
		printf("%d, ",i);
		i=i+1;
	}
	printf("\n fin prueba while \n");
//------------------------------------------------------------------------------
	printf("\n inicio prueba for \n");
	for(i=0;i<=100;i=i++){
		printf("%d, ",i);
		i=i+1;
	}
	printf("\n fin prueba for \n");
//------------------------------------------------------------------------------
	printf("\n inicio prueba do \n");
	i=0;
	do{
		printf("%d ,",i);
		i=i+1;
	}while(i<=100);
	printf("\n fin prueba do \n");
//------------------------------------------------------------------------------
	printf("\n inicio prueba do \n");
	i=0;
	do{
		printf("%d ,",i);
		i=i+1;
	}while(i<=100);
	printf("\n fin prueba do \n");
//------------------------------------------------------------------------------
	printf("\n inicio prueba goto \n");
	i=0;
	
	do{
		printf("%d ,",i);
		i=i+1;
	}while(i<=100);
	printf("\n fin prueba do \n");
//------------------------------------------------------------------------------
}
