#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,f;
	printf("Enter the no. :");
	scanf("%d",&n);
	i=2,f=0;
	while(i<n/2)
	{
		if(n%i==0)
		f=1;
		i++;
	}
	if(f==0)
	printf("%d is a prime no.\n",n);
	else
	printf("%d is not a prime no.\n",n);
}
