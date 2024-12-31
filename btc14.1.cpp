#include <stdio.h>
#include <string.h>
int main() {
    char input[1000];
    printf(" nhap 1 chuoi bat ki ");
    fgets(input, sizeof(input), stdin);
    size_t length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }
    printf(" chuoi vua nhap la: \"%s\"\n", input);
    printf(" do dai cua chuoi: %zu\n", length);
    return 0;
}

