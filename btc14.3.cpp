#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Tran Minh Duc";
    int length = strlen(str);
    printf(" chuoi ban dau: %s\n", str);
    printf(" chuoi dao nguoc: ");
    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

