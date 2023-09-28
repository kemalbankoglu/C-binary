#include <stdio.h>
#include <stdlib.h>

int n_hesapla(int n)
{
    int i = 0;
    int j = 0;
    int toplam = n;
    int sonuc = 1;
    while (n != 1 && n != 0)
    {
        n = n / 2;
        i++;
    }

    for (j = 0; j < i; j++)
    {
        sonuc = sonuc * 2;
    }

    if (sonuc == toplam)
    {
        return i;
    }
    else
    {
        return i + 1;
    }
}

void n_bit_hesapla(int n, int max_us)
{
    int i;
    int j;
    int sonuc = 1;

    if (n == 8)
    {

        printf("%d", 1);
        for (i = 0; i < max_us; i++)
        {
            printf("0");
        }
    }
    if (n == 4)
    {
        printf("0");

        printf("%d", 1);
        for (i = 0; i < max_us; i++)
        {
            printf("0");
        }
    }
    if (n == 2)
    {
        printf("0");
        printf("0");

        printf("%d", 1);
        for (i = 0; i < max_us; i++)
        {
            printf("0");
        }
    }

    else if (n != 2 && n != 4 && n != 8)
    {
        ekstra_fonksiyon(n, max_us);
    }
}

void ekstra_fonksiyon(int n, int max_us)
{
    int i;
    int sonuc = n;

    if (sonuc != 0)
    {
        if (sonuc > 8)
        {
            for (i = max_us - 1; i >= 0; i--)
            {
                if (sonuc != 0)
                {
                    int a = us_hesapla(i);
                    if (a <= sonuc)
                    {
                        printf("%d", 1);
                        sonuc = sonuc - a;
                    }
                    else if (!(a < sonuc))
                    {
                        printf("%d", 0);
                    }
                }
                else if (sonuc == 0)
                {
                    printf("%d", 0);
                }
            }
        }

        else if (sonuc < 8 && sonuc > 3)
        {
            printf("%d", 0);
            for (i = max_us - 1; i >= 0; i--)
            {

                if (sonuc != 0)
                {
                    int a = us_hesapla(i);
                    if (a <= sonuc)
                    {
                        printf("%d", 1);
                        sonuc = sonuc - a;
                    }
                    else if (!(a < sonuc))
                    {
                        printf("%d", 0);
                    }
                }
                else if (sonuc == 0)
                {
                    printf("%d", 0);
                }
            }
        }
        else if (sonuc == 3)
        {
            printf("%d", 0);
            printf("%d", 0);
            for (i = max_us - 1; i >= 0; i--)
            {

                if (sonuc != 0)
                {
                    int a = us_hesapla(i);
                    if (a <= sonuc)
                    {
                        printf("%d", 1);
                        sonuc = sonuc - a;
                    }
                    else if (!(a < sonuc))
                    {
                        printf("%d", 0);
                    }
                }
                else if (sonuc == 0)
                {
                    printf("%d", 0);
                }
            }
        }
        else if (sonuc == 1)
        {
            printf("0001");
        }
    }
}

int us_hesapla(int i)
{
    if (i > 0)
    {
        int j;
        int us = 1;
        for (j = 0; j < i; j++)
        {
            us = us * 2;
        }
        return us;
    }

    else if (i == 0)
    {
        int j;
        int us = 0;

        return us;
    }
}

int main()
{
    int n, k;
    int a,b;

    printf("Lutfen birinci sayiyi giriniz\n"); 
    scanf("%d", &n);
    
    printf("\nBirinci sayi: ");
    n_hesapla(n);
    n_bit_hesapla(n, n_hesapla(n));
    
    

    printf("\nLutfen ikinci sayiyi giriniz\n"); 
    scanf("%d", &k);
    printf("\nIkinci sayi: "); 
    n_hesapla(k);
    n_bit_hesapla(k, n_hesapla(k));

    return 0;
}