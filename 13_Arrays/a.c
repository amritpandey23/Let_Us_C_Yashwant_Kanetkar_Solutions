#include <stdio.h>

int main() {
    int pos, neg, ev, od;
    int nums[25];
    for (int i = 0; i < 25; ++i) {
        scanf("%d", nums[i]);
    }
    pos = neg = ev = od = 0;
    for (int i = 0; i < 25; ++i) {
        (nums[i] > 0 ? pos++ : neg++);
        (nums[i] % 2 == 0 ? ev++ : od++);
    }
    printf("Total Evens = %d\n", ev);
    printf("Total Odds = %d\n", od);
    printf("Total Positive = %d\n", pos);
    printf("Total Negative = %d\n", neg);
    return 0;
}
