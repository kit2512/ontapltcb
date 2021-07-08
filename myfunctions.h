#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

bool isSquare(int n)
{
    if (n == 1)
        return true;
    int i = 1;
    while (i <= n / 2)
    {
        if (i * i == n)
            return true;
        i++;
    }
    return false;
}

void convertToBinary(int n)
{
    if (n)
    {
        convertToBinary(n / 2);
        printf("%d", n % 2);
    }
}

float tong1deni(int i)
{
    float s = 0;
    for (int j = 1; j <= i; j++)
    {
        s += j;
    }
    return s;
}

void inDay(int *day, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", day[i]);
    }
    printf("\n");
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isSymetric(int n)
{
    int n2 = 0, n3 = n;
    while (n3)
    {
        n2 = n2 * 10 + n3 % 10;
        n3 /= 10;
    }
    if (n2 == n)
        return true;
    else
        return false;
}

bool isAmstrong(int n)
{
    int arr[10] = {0};
    int n2 = n, count = 0;
    while (n2)
    {
        arr[count] = n2 % 10;
        count++;
        n2 /= 10;
    }
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += pow(arr[i], count);
    }
    return sum == n;
}

void nhapDay(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sapXepDay(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

int isInString(char chr, char str[])
{
    if (str[0] == '\0')
        return 0;
    else
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == chr)
                return 1;
        }
    return 0;
}

void tryNextArray(int *day, int n, int index)
{
    for (int i = 0; i <= 1; i++)
    {
        day[index] = i;
        if (index == n - 1)
        {
            inDay(day, n);
        }
        else
        {
            tryNextArray(day, n, index + 1);
        }
    }
}