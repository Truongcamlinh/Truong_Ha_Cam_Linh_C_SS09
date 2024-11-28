#include <stdio.h>

int main()
{
    int a[100][100];
    int row, col, option;

    while (1)
    {
        printf("MENU\n");
        printf("1. Nhap kich thuoc va gia tri cac phan tu cua ma tran\n");
        printf("2. In gia tri cac phan tu cua ma tran\n");
        printf("3. In ra cac phan tu le va tinh tong\n");
        printf("4. In ra cac phan tu tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu tren duong cheo chinh\n");
        printf("6. In ra cac phan tu tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Nhap so dong va so cot cua ma tran: ");
            scanf("%d%d", &row, &col);
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < col; ++j)
                {
                    printf("Nhap vao phan tu a[%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &a[i][j]);
                }
            }
            break;
        case 2:
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < col; ++j)
                {
                    printf("%d ", a[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
        {
            int sum = 0;
            printf("Cac phan tu le: ");
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < col; ++j)
                {
                    if (a[i][j] % 2 != 0)
                    {
                        printf("%d ", a[i][j]);
                        sum += a[i][j];
                    }
                }
            }
            printf("\nTong cac phan tu le: %d\n", sum);
            break;
        }
        case 4:
        {
            int product = 1;
            printf("Cac phan tu tren duong bien: ");
            for (int i = 0; i < row; ++i)
            {
                for (int j = 0; j < col; ++j)
                {
                    if (i == 0 || i == row - 1 || j == 0 || j == col - 1)
                    {
                        printf("%d ", a[i][j]);
                        product *= a[i][j];
                    }
                }
            }
            printf("\nTich cac phan tu tren duong bien: %d\n", product);
            break;
        }
        case 5:
            printf("Cac phan tu tren duong cheo chinh: ");
            for (int i = 0; i < row; ++i)
            {
                printf("%d ", a[i][i]);
            }
            printf("\n");
            break;
        case 6:
            printf("Cac phan tu tren duong cheo phu: ");
            for (int i = 0; i < row; ++i)
            {
                printf("%d ", a[i][col - 1 - i]);
            }
            printf("\n");
            break;
        case 7:
        {
            int maxSum = -1000000, maxRow = 0;
            for (int i = 0; i < row; ++i)
            {
                int sum = 0;
                for (int j = 0; j < col; ++j)
                {
                    sum += a[i][j];
                }
                if (sum > maxSum)
                {
                    maxSum = sum;
                    maxRow = i;
                }
            }
            printf("Dong co tong max: %d\nSum: %d\n", maxRow + 1, maxSum);
            break;
        }
        case 8:
            return 0;
        default:
            printf("Lua chon khong hop le.\n");
        }
    }
}
