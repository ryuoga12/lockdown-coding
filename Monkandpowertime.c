#include <stdio.h>
 
int main()
{
	int N;
	int call[100], ideal[100];
	scanf("%d", &N);
	for (int i=0;i<N;i++)
		scanf("%d", &call[i]);
	for (int i=0;i<N;i++)
		scanf("%d", &ideal[i]);
	int front=0, rear=N, count=N, res=0, front_i=0;
	while (count!=0)
	{
		while (call[front]!=ideal[front_i])
		{
			if (call[front]!=0) res++;
			front=(front+1)%N;
			rear=(rear+1)%N;
		}
		call[front]=0;
		front=(front+1)%N;
		front_i++;
		res++;
		count--;
	}
	printf("%d", res);
	return 0;
}
