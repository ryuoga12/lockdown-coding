#include <stdio.h>
 
int main()
{
    int n,c,aa[100001],cc[100001],i;
    scanf("%d %d",&n,&c);
    aa[0]=0;aa[1]=0;
    for(i=2;i<=n;i++)
    	scanf("%d",&aa[i]);
    for(i=1;i<=n;i++)
    	scanf("%d",&cc[i]);
   	//for(i=1;i<=n;i++)
   	//	printf("%d %d*",aa[i],cc[i]);
    for(i=1;i<=n;i++)
    {	int f=0;
    	int p=aa[i];
    	while(p)
    	{	//printf("%d %d\n",p,i);
    		if(cc[p]==cc[i])
    		{	printf("%d ",p);
    			f=1;
    			break;
    		}
    		p=aa[p];
    	}
    	if(f==0)
    		printf("-1 ");
    }
    
    return 0;
}
