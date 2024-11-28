#include <stdio.h>

int main()
{
    int a[100] = {0};
    int currentLeight = 0;
    int option;

    while (1)
    {
        printf("MENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
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
            int sum = 0;
            for (int i = 0; i < currentLeight; ++i)
            {
                if (a[i] % 2 == 0)
                {
                    printf("%d ", a[i]);
                    sum += a[i];
                }
            }
            printf("\n%d\n", sum);
        }
        else if (option == 4)
        {
            int max = a[0], min = a[0];
            for (int i = 1; i < currentLeight; ++i)
            {
                if (a[i] > max)
                    max = a[i];
                if (a[i] < min)
                    min = a[i];
            }
            printf("Max: %d\nMin: %d\n", max, min);
        }
        else if (option == 5)
        {
            int sum = 0;
            for (int i = 0; i < currentLeight; ++i)
            {
                int isPrime = 1;
                if (a[i] < 2)
                    isPrime = 0;
                for (int j = 2; j * j <= a[i]; ++j)
                {
                    if (a[i] % j == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }
                if (isPrime)
                {
                    printf("%d ", a[i]);
                    sum += a[i];
                }
            }
            printf("\n%d\n", sum);
        }
        else if (option == 6)
        {
            int n, count = 0;
            printf("Nhap vao phan tu can kiem tra: ");
            scanf("%d", &n);
            for (int i = 0; i < currentLeight; ++i)
            {
                if (a[i] == n)
                    count++;
            }
            printf("So lan xuat hien cua %d la: %d\n", n, count);
        }
        else if (option == 7)
        {
            int num, idx;
            printf("Nhap vao gia tri va vi tri muon nhap: ");
            scanf("%d%d", &num, &idx);
            if (idx > currentLeight)
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
        else if (option == 8)
        {
            break;
        }
        else
        {
            printf("Lua chon khong hop le.\n");
        }
    }
}
