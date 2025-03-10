#include <cstdio>

int main()
{
    char digits[100001];
    scanf("%s", digits);

    int times(0);
    if (digits[1] != 0)
    {
        int digitsum(0);
        char* p = digits;
        while (*p != 0)
        {
            digitsum += (*p - '0');
            ++p;
        }
        ++times;

        while (digitsum > 9)
        {
            int m(digitsum);
            digitsum = 0;
            while (m != 0)
            {
                digitsum += m % 10;
                m /= 10;
            }
            ++times;
        }
    }
    printf("%d\n", times);
    return 0;
}
