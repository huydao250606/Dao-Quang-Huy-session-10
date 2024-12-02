#include<stdio.h>

int main(){
	int arr[]={25,06,11,07,2006,25};
	int size=sizeof(arr)/sizeof(int);
	printf("cho mang: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nnhap phan tu muon tim: ");
	int ans;
	scanf("%d",&ans);
	int number[size];
	int soluong=0;
	int a=0;
	for(int i=0;i<size;i++){
		if(arr[i]==ans){
			number[soluong]=i;
			soluong++;
			a=1;
		}
	}
    if (a==1) {
        printf("So %d xuat hien tai cac vi tri: ", ans);
        for (int i = 0; i < soluong; i++) {
            printf("%d ", number[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay so %d trong mang.\n", ans);
    }
	return 0;
}
