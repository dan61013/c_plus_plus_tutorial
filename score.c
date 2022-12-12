#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    int math;
    int eng;

    printf("請輸入國文幾分:\n");
    scanf("%d", &ch);
    printf("請輸入數學幾分:\n");
    scanf("%d", &math);
    printf("請輸入英文幾分:\n");
    scanf("%d", &eng);

    printf("總分: %d\n", ch+math+eng);
    system("pause");
    return 0;
}