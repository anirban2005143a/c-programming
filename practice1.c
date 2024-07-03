#include <stdio.h>

int main()
{
    int a, b, i;

    printf("Enter lower limit to print armstrong numbers: ");
    scanf("%d", &a);
    printf("Enter upper limit to print armstrong numbers: ");
    scanf("%d", &b);

    for (i = a; i < b; i++)
    {

        int ans = 0, original = i;
        while (original != 0)
        {
            int lastDigit = original % 10;
            ans += lastDigit * lastDigit * lastDigit;
            original /= 10;
        }

        if (ans == i)
        {
            printf("%d ", ans);
        }
    }

    return 0;
}
