#include<stdio.h>

int main(){
    int arr[]={6,8,3,7,5,1,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<n-1;i++){ 
        for(int j=0; j < n - i - 1; j++){ 
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        } 
    } 
    printf("Sap xep: \n"); 
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]); 
    }
    return 0; 
}
