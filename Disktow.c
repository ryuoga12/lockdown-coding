#include<stdio.h>
 
long long arr[1000002], a_size = 0;
 
void enqueue(long long num)
{
    arr[a_size] = num;
    a_size++;
}
 
int main()
{
    long long N, temp[1000002] = {0};
    scanf("%lld", &N);
    
    long long min = N, t_size = N, flag = 1;
    
    long long z;//, a_size = 0;
    for (long long i = 0; i < N; i++)
    {
        scanf("%lld", &z);
        enqueue(z);
        temp[z] = z;
        
        if(z == min)
        {
            while(temp[t_size])
            {
                printf("%lld ", t_size);
                t_size--;
            }
            min = t_size;
            printf("\n");
        }
        else
        {
            printf("\n");
        }
    }
    
}
