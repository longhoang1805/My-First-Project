#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    int k;
    k=0;
    printf("  Nhap so n = ");
    scanf("%d",&n);
    while (2*k<=n)
    {
        n=n;
        k++;
    }
    printf("  So k nho nhat de 2k>n la: %d\n",k);
    getch();
    return 0;
}
