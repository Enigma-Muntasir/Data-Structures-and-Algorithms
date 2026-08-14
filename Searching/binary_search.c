#include <stdio.h>

#define nl printf("\n");

int main() {
    int a[] = {2, 3, 8, 9, 15, 18, 38, 47, 58, 60};
    int l = 0, r = sizeof(a) / sizeof(a[0]);
    int m = (l + r) / 2;
    int num;
    
    scanf("%d", &num);
    
    while (l < r) {
        if (a[m] == num) {
            break;
        } 
        else if (a[m] > num) {
            r = m;
        } 
        else if (a[m] < num) {
            l = m;
        }
        m = (l + r) / 2;
    }
    
    printf("%d", m);
    
    return 0;
}