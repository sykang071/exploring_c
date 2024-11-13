#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int all_numbers[] = {a, b, c, d};

    int max_number = 0;

    int i;

    for (i = 0; i < 4; i++){
        if (all_numbers[i] > max_number) {
            max_number = all_numbers[i];
        }
        else {
            return max_number;
        }
    }

    return max_number;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}