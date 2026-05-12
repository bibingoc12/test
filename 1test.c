#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool snt(int a) {
    if(a < 2) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for(int i = 3; i * i <= a; i++) {
        if(a % i == 0) return false;
    }
    return true;
}

int main() {
    int n, k;
    int temp = 0, a = 0;
    scanf("%d %d", &n, &k);
    temp = pow(10, k);
    a = n % temp;

    if(snt(a)) printf("YES");
    else printf("NO");
}