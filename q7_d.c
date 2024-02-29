#include <stdio.h>

int main() {
    char str1[100], str2[100], concat_str[200];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copying the first string to the concatenated string
    for (i = 0; str1[i] != '\0'; i++) {
        concat_str[i] = str1[i];
    }

    // Copying the second string to the concatenated string
    for (j = 0; str2[j] != '\0'; j++) {
        concat_str[i + j] = str2[j];
    }

    // Adding null character at the end of the concatenated string
    concat_str[i + j] = '\0';

    printf("Concatenated string: %s", concat_str);

    return 0;
}
