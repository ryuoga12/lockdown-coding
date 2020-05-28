#include <stdio.h>

int main()
{
    int n,m,s=0;
    printf("Enter a number whose digital root has to be found : ");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        s+=(n%10);
        n/=10;
        if(n==0&&s>9)
        {
            n=s;
            s=0;
        }
    }
    printf("digital_root(%d) = %d\n",m,s);
    return 0;
}
