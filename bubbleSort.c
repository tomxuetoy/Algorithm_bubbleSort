/* bubbleSort.cpp : Defines the entry point for the console application.
 * check below link to get intuitive feelings:
 * http://www.algolist.net/Algorithms/Sorting/Bubble_sort
 * */
#include "stdio.h"

void bubble(int A[],int n)  //冒泡排序
{
    int t;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) { //注意在内层循环中j的结束值是 n-i-1，否则出错
            if(A[j+1]<A[j]) {
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
}

int main(int argc, char* argv[])
{
    int i,k,n;
    n=5;
    int array[5];
    printf("bubble sort algorithom ,array with 6 items: ");
    for(i=0; i<n; i++) {
        printf("please input array[%d] value: ",i);
        scanf("%d",&k);
        array[i]=k;
    }
    //打印排序前内容
    printf("current array value: ");
    for(i=0; i<n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");

    //排序
    bubble(array,n) ;

    //打印排序后内容
    printf("sorted array value: ");
    for(i=0; i<n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
