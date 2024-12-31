#include <stdio.h>
#include <string.h>
int main() {
    char str[] = " Tran Van A";
    char ch;
    int count = 0;
    printf(" chuoi ban dau: %s\n", str);
    printf(" nhap vao 1 ki tu bat ki: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf(" ki tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    return 0;
}

