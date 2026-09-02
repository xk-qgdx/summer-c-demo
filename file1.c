#include<stdio.h>
int main(void)
{
    int arr[6]={12,45,7,23,9,33};
    int sum=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    double avg=(double)sum/len;
    printf("数组总和：%d,平均值：%.2f",sum,avg);
    return 0;
}