#include <stdio.h>
int main()
{
    int a,x;
    scanf("%d",&a);
    x = a;
    int l = 0;
    while(x != 0)
    {
        x /= 10;
        l++;
    }
    int b[l];
    int t;
    for(int i = 0; i < l; i++)
    {
        b[l-i-1] = a%10;
        a/=10;
    }
    for(int i = 0; i < l/2; i++) if(b[i] != b[l-1-i]) return printf("NO");
    printf("YES");
}