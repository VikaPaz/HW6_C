#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int x = ((a - 1) / d + 1) * d + c; // первое даёт остаток c при делении на d
    // Выводим все числа от x до b
    while (x <= b) { 
        printf("%d\n", x);
        x += d;
    }
    return 0;
}
