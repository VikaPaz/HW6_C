#include <stdio.h>

int ispolnitel(int num) {
    int first = num / 100;          // Первая цифра
    int second = (num / 10) % 10;   // Вторая цифра
    int third = num % 10;           // Третья цифра
    int n1 = (first * second);
    int n2 = (second * third);
    if (n1 > n2) {
        return n1 * 10 + n2;
    } else {
        return n2 * 10 + n1;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", ispolnitel(num));
    return 0;
}
