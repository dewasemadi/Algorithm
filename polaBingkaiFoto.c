#include <stdio.h>

int main()
{
    int n, row, col, temp;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &row, &col);
        temp = 3 * row + 1; //baris
        if (row % 2 == 0)   //kolom genap
            col = temp + col + row;
        else //kolom ganjil
            col = temp + col - row;
        // cetak bintang
        for (int i = 0; i < temp; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == 0 || i == temp - 1 || i % 3 == 0 || j == 0 || j == col - 1 || j % 3 == 0)
                    printf("*");
                else
                    printf(".");
            }
            printf("\n");
        }
        // newline sebelum baris terakhir
        if (n > 0)
            printf("\n");
    }
    return 0;
}