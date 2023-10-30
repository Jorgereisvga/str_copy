#include <stdio.h>

void str_copy(char *origin, char *destiny) {
    int i = 0;

    while (origin[i] != '\0') {
        destiny[i] = origin[i];
        i++;
    }

    destiny[i] = '\0';
}

int main() {
    char str1[] = "PHP e a melhor linguagem do mundo";
    char str2[20];

    str_copy(str1, str2);

    printf("str2: %s\n", str2);

    return 0;
}