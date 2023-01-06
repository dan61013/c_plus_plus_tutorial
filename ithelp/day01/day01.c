#include <stdio.h>
#include <stdlib.h>

int main() {
    int x; // Integer 整數
    char name; // 字元
    float f; // 浮點數

    printf("請輸入整數, 字元, 浮點數: \n");
    scanf("%i %c %f", &x, &name, &f);
    printf("你輸入的整數: %d \n", x);
    printf("你輸入的字元: %c \n", name);
    printf("你輸入的浮點數: %f \n", f);
    system("pause");
    
    return 0;
}