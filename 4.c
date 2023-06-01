#include <stdio.h>

int sumDigits(int *num) {
    int number = *num;
    int sum = 0;
    while (number != 0) {
        sum += number % 10;   // Получаем последнюю цифру числа и добавляем ее к сумме
        number /= 10;        // Удаляем последнюю цифру числа
    }
    return sum;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sumDigits(&num));
    return 0;
}
