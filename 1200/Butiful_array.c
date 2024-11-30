#include <stdio.h>

int main() {
    int n1, n2, temp[500], sum = 0;
    scanf("%d%d", &n1, &n2);
    // if (n2 <= 0 && n1 <= 0) {
    //     printf("1\n%d", n1);
    if (n2 <= 0 || n1 <= 0) {
        printf("3\n");
        for (int i = 0; i < 2; i++) {
            temp[i] = n2;
            sum += n2;
        }
        int out = (n1 * 3) - sum;
        temp[2] = out;
        for (int i = 0; i < 3; i++)
            printf("%d ", temp[i]);
    } else if (n2 > 0) {
        printf("%d\n", n1);
        for (int i = 0; i < n1 - 1; i++) {
            temp[i] = n2;
            sum += n2;
        }
        int out = n1 - (sum % n1);
        temp[n1 - 1] = out;
        for (int i = 0; i < n1; i++)
            printf("%d ", temp[i]);
    }
    return 0;
}
