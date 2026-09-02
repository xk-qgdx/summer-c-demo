#include<stdio.h>
int main(){
    int arr[]={11,23,43,99,33,52};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
      }
    }
    for(int m=0;m<n;m++){
        printf("%d",arr[m]);
    }
    printf("\n");
    return 0;
}