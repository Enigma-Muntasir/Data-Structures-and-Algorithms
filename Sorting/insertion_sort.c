#include <stdio.h>

void insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;

        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main(){
    int a[]={5,3,8,1,2};
    int n=5;

    insertionSort(a,n);

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}