#include <stdio.h>
int main()
{
    int t, a, b, c, d1, d2;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (b - a == c - b)
            printf("Yes\n");
    }
    return 0;
}