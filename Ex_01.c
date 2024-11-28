#include <stdio.h>

int main()
{
    int a[101] = {0}, currentLeight;
    scanf("%d", &currentLeight);

    for (int i = 0; i < currentLeight; ++i)
    {
        scanf("%d", a + i);
    }

    int num, idx;
    scanf("%d%d", &num, &idx);

    if (idx >= currentLeight)
    {
        a[idx - 1] = num;
        currentLeight = idx;
    }
    else
    {
        for (int i = currentLeight; i >= idx; --i)
        {
            a[i] = a[i - 1];
        }
        a[idx - 1] = num;
        ++currentLeight;
    }

    for (int i = 0; i < currentLeight; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
