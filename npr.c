#include<stdio.h>
#include<conio.h>
int main()
{
    long long fact=1, numerator, denominator;
    int perm, n, r, i=1, sub;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    while(i<=n)
    {
        fact = i*fact;
        i++;
    }
    numerator=fact;                    // n!
    sub = n-r;
    fact=1;
    i=1;
    while(i<=sub)
    {
        fact=i*fact;
        i++;
    }
    denominator = fact;                // (n-r)!
    perm = numerator/denominator;
    printf("\nPermutation = %d", perm);
    getch();
    return 0;
}
