#include <stdio.h>

int main()
{
    int x, n, total, sebelum, sesudah, diskon;
    scanf("%d", &x);
    scanf("%d", &n);

    total = n * 1000;
    if (x == 1)
    {
        diskon = 0.1 * total;
        if (total >= 10000)
            diskon *= 0.1;
    }
    else
        diskon = 0.2 * total;

    printf("%d\n", total);
    printf("%d\n", diskon);
    printf("%d\n", total - diskon);

    return 0;
}

/*
10 % jika menggunakan kartu debit dan diskon 20 % jika menggunakan kartu kredit

1 untuk kartu kredit,
2 untuk kartu debit

Harga 1 buah seblak adalah 1000
Akan ada diskon tambahan 10% lagi jika transaksi lebih dari sama dengan 10000 dan tidak berlaku kelipatan
*/