#include <stdio.h>

int main() {
    int N, X, Y;
    scanf("%d", &N);

    while (N--) {
        scanf("%d %d", &X, &Y);

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        int sum = 0;
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {  
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}