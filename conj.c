#include<stdio.h>
void main()
{
    int t,i=0;
    long int n;
    scanf("%d",&t);
    while(i<t)
    {
        scanf("%ld",&n);
        do{
        if(n%2==0)
            n=n/2;
        else
            n=n*3+1;
        if(n==1){
            printf("YES");
            break;}
        }while(1);
        if(n!=1)
            printf("N0");
        i++;
        printf("\n");
    }
}
