#include <stdio.h>
#include <stdlib.h>

int main() {
    int x; // Integer ���
    char name; // �r��
    float f; // �B�I��

    printf("�п�J���, �r��, �B�I��: \n");
    scanf("%i %c %f", &x, &name, &f);
    printf("�A��J�����: %d \n", x);
    printf("�A��J���r��: %c \n", name);
    printf("�A��J���B�I��: %f \n", f);
    system("pause");
    
    return 0;
}