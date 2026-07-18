#include<stdio.h>

int sum(x){
    if(x==0)
        return 0;
    else
        return x + sum(x-1);
}


int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("The sum from 1 to %d is %d", n, sum(n));
    return 0;
}