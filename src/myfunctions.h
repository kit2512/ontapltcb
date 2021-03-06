#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int getFirstXLast(int n) {
    int arr[7] = {0};
    int i = 0;
    while (n) {
        arr[i] = n%10;
        i++;
        n/=10;
    }
    return arr[0]*arr[i-1];
}

bool isSquare(int n)
{
    return n == 0 ? false : pow((int)sqrt(n), 2) == n;
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
    return n2 == n;
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
    // nếu xâu là xâu rỗng thì trả về false
    if (str[0] == '\0')
        return false;
    else
        // duyệt qua các phần tử của xâu
        for (int i = 0; i < strlen(str); i++)
        {
            // nếu gặp bất kì phần tử nào của xâu có giá trị bằng giá trị của chr
            // thi trả về true
            if (str[i] == chr)
                return true;
        }
    // sau khi đã duyệt hết mà không tìm thấy thì trả về false
    return false;
}

void tryNextArray(int *day, int n, int index)
{
    // thử các giá trị có thể có của chữ số thứ index
    for (int i = 0; i <= 1; i++)
    {
        // gán phần tử thứ index cho i
        day[index] = i;
        // đã duyệt đến phần tử cuối cùng thì in ra dãy
        if (index == n - 1)
        {
            inDay(day, n);
        }
        // còn không thì xử lí phần tử tiếp theo
        else
        {
            tryNextArray(day, n, index + 1);
        }
    }
}