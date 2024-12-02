#include<stdio.h>

int main(){
	int arr[5]={25,06,11,07,2006};
	int size=sizeof(arr)/sizeof(int);
	printf("maang trc khi sap xep: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=1;i<size;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("\n mang sau khi sap xep: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
