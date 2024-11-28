#include <stdio.h>

int main()
{
    int a[101] = {0}, currentLeight = 0, option;
    while (1)
    {
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu vao mang\n");
        printf("4. Sua phan tu mang\n");
        printf("5. Xoa phan tu mang\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Nhap so phan tu muon nhap: ");
            scanf("%d", &currentLeight);
            for (int i = 0; i < currentLeight; ++i)
            {
                printf("Nhap vao phan tu thu %d: ", i + 1);
                scanf("%d", &a[i]);
            }
        }
        else if (option == 2)
        {
            for (int i = 0; i < currentLeight; ++i)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
        else if (option == 3)
        {
            int num, idx;
            printf("Nhap vao gia tri va vi tri muon nhap: ");
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
        }
        else if (option == 4)
        {
            int num, idx;
            printf("Nhap vao gia tri va vi tri can sua: ");
            scanf("%d%d", &num, &idx);
            a[idx - 1] = num;
        }
        else if (option == 5)
        {
            int idx;
            printf("Nhap vao vi tri muon xoa: ");
            scanf("%d", &idx);
            if (idx < 1 || idx > currentLeight)
            {
                printf("Vi tri khong hop le.\n");
            }
            else
            {
                for (int i = idx - 1; i < currentLeight - 1; ++i)
                {
                    a[i] = a[i + 1];
                }
                --currentLeight;
            }
        }
        else if (option == 6)
        {
            break;
        }
        else
        {
            printf("Lua chon khong hop le.\n");
        }
    }
}
