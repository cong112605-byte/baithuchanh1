#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    scanf("%d", &N);

    if (N < 2) {
        printf("Khong phai so nguyen to");
    } else {
        i = 2;
        while (i <= sqrt(N)) {
            if (N % i == 0) {
                printf("Khong phai so nguyen to");
                return 0;
            }
            i++;
        }
        printf("La so nguyen to");
    }

    return 0;
}
