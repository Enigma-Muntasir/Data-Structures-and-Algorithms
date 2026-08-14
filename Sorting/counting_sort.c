#include <stdio.h>

void countingSort(int a[], int n){
    int count[100]={0};

    for(int i=0;i<n;i++)
        count[a[i]]++;

    int k=0;

    for(int i=0;i<100;i++){
        while(count[i]--)
            a[k++]=i;
    }
}

int main(){
    int a[]={5,3,8,1,2};
    int n=5;

    countingSort(a,n);

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}