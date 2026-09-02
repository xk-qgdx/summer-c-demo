#include<stdio.h>
int main(){
    int nums[5]={5,23,42,33,1}
    int *p=nums;
    for(int i=0;i<5;i++){
        printf("%d",*(p+i));
    }
    printf("\n");
    return 0;
}