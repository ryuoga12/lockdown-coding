#include <stdio.h>
int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l+1;
    int j=h;
    while(i<=j)
    {
        while(i<=h&&arr[i]<pivot)
            i++;
        while(j>l&&arr[j]>pivot)
            j--;
        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else
            i++;
    }
    arr[l]=arr[j];
    arr[j]=pivot;
    return j;
}
void sort(int arr[],int l,int h)
{
    if(l>=h)
        return;
    int pivot=partition(arr,l,h);
    sort(arr,l,pivot-1);
    sort(arr,pivot+1,h);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,x;
        scanf("%d",&n);
        scanf("%d",&x);
        int i,arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        sort(arr,0,n-1);
        int ans=1;
        i=1;
        while(i<n)
        {
            if(arr[i]!=arr[i-1])
                ans++;
            i++;
        }
        if(ans==x)
            printf("Good\n");
        else
            if(ans<x)
                printf("Bad\n");
            else
                printf("Average\n");
        t--;
    }
    return 0;
}
