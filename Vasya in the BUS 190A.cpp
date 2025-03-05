#include <cstdio>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n != 0 || m == 0)
    {
        printf("%d %d\n", (m > n ? m : n), (m != 0 ? n + m - 1 : n));
    }
    else
    {
        printf("Impossible\n");
    }
    return 0;
}
