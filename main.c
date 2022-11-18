#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    char name;
    float f;

    printf("請輸入整數, 字元, 浮點數: \n");
    scanf("%d %c %f", &i, &name, &f);
    printf("你輸入的整數: %d \n", i);
    printf("你輸入的字元: %c \n", name);
    printf("你輸入的浮點數: %f \n", f);
    system("pause");
    
    return 0;

}