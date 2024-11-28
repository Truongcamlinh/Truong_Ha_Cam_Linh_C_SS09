#include <stdio.h>

int main()
{
    int a[10] = {3, 2, 45, 1, 10, 2, 54, 2, 6, 8};
    int num, idx;
    scanf("%d%d", &num, &idx);

    a[idx - 1] = num;    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
