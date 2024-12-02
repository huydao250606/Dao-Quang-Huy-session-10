#include<stdio.h>

int main(){
	int number[9]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(number)/sizeof(int);
	printf("nhap phan tu muon tim: ");
	int ans;
	scanf("%d",&ans);
	for(int i=0;i<size;i++){
		if(number[i]==ans){
			printf("phan tu %d co ton tai trong mang!\n",ans);
			printf("phan tu nam o vi tri %d",i+1);
			return 0; 
		}
	}
	printf("phan tu khong ton tai ?");
	return 0;
}
