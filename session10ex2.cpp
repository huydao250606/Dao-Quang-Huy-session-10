#include<stdio.h>

int main(){
	int number[5]={25,06,11,07,2006};
	int size= sizeof(number)/sizeof(int);
	printf("maang trc khi sap xep: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
	}
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(number[j]>number[j+1]){
				int temp = number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
			}
		}
	}
	printf("\nmang sau khi sap xep: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",number[i]);
	}
	return 0;
}
