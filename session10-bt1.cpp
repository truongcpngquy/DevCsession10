#include<stdio.h>

int main(){
	int arr[]={1,2,3,4,5};
	int a,n  = sizeof(arr) / sizeof(arr[0]);
	
	
	printf("Nhap vao phan tu can kiem tra: ");
	scanf("%d",&a);
	
	for(int i=0;i<n;i++){
		if(arr[i]==a){
				printf("Phan tu %d co trong mang tai vi tri %d\n",a,i);
				return 1; 
			} 
	} 
	printf("Phan tu khong co trong mang ") ;
	return 0; 
} 
