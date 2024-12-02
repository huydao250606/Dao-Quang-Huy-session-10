#include<stdio.h>

int main(){
	int arr[5]={25,06,11,07,2006};
	int size=sizeof(arr)/sizeof(int);
	printf("maang trc khi sap xep: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0;i<size;i++){
		int min =i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("\n mang sau khi sap xep: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
