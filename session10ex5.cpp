#include<stdio.h>

int main(){
	int arr[]={25,06,11,07,2006};
	int start=0;
	int end=sizeof(arr)/sizeof(int);
	int mid;
	printf("maang trc khi sap xep: \n");
	for(int i=0;i<end;i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0;i<end;i++){
		int min =i;
		for(int j=i+1;j<end;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
	printf("\nmang sau khi sap xep: \n");
	for(int i=0;i<end;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nnhap phan tu can tim: ");
	int num;
	scanf("%d",&num);
    while(start<=end){
    	mid=(start+end)/2;
    	if(arr[mid]==num){
    		printf("vi tri cua phan tu la: %d",mid);
    		return 0;
		}else if(arr[mid]<num){
			start=mid+1;
		}else{
			end=mid-1;
		}
	}
	printf("khong tim thay phan tu!");
	return 0;
}
