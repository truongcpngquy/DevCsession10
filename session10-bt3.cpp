#include<stdio.h>

int main(){
    int arr[]={6,8,3,7,5,1,4,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIndex]) {
            minIndex = j;
        }
    }
    
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
}
   printf("Sap xep: \n"); 
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]); 
    }
    
    
    return 0; 
}
