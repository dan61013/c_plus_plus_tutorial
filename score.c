#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    int math;
    int eng;

    printf("�п�J���X��:\n");
    scanf("%d", &ch);
    printf("�п�J�ƾǴX��:\n");
    scanf("%d", &math);
    printf("�п�J�^��X��:\n");
    scanf("%d", &eng);

    printf("�`��: %d\n", ch+math+eng);
    system("pause");
    return 0;
}