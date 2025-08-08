#include <stdio.h>
int main()
{
    int t, i, n, a[100], l, h;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        l = a[0];
        for (i = 1; i < n; i++)
            if (l > a[i])
                l = a[i];
        h = a[0];
        for (i = 1; i < n; i++)
            if (h < a[i])
                h = a[i];
        printf("%d\n", h - l);
    }
    return 0;
}