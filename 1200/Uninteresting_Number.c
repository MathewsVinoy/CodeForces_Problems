#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char str[100005];
        scanf("%s", str);

        int flag = 1;
        int sum = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            sum += str[j] - '0';
        }


        if (sum % 9 == 0) {
            flag = 0;
        } else {

            for (int j = 0; str[j] != '\0'; j++) {
                if (str[j] >= '0' && str[j] <= '3') {
                    int num = str[j] - '0';
                    int prod = num * num;
                    char temp[100005];
                    strcpy(temp, str);
                    temp[j] = prod + '0';
                    int new_sum = 0;
                    for (int k = 0; temp[k] != '\0'; k++) {
                        new_sum += temp[k] - '0';
                    }

                    if (new_sum % 9 == 0) {
                        flag = 0;
                        break;
                    }
                }
            }
        }

        if (flag == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
