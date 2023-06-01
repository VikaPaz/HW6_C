#include <stdio.h>
#include <string.h>


char* join(char* words[], int n) {
    static char result[255];
    result[0] = '\0'; // Обнуляем 
    for (int i = 0; i < n; i++) {
        strcat(result, words[i]);   // Добавляем текущую строку к результату
        if (i < n - 1) {
            strcat(result, " ");   // Добавляем пробел, если это не последняя строка
        }
    }
    return result;
}

int main() {
    char* words[] = {"Hello", "world", "from", "C"};
    int n = sizeof(words) / sizeof(words[0]);
    char* result = join(words, n);
    printf("%s\n", result);         
    return 0;
}
