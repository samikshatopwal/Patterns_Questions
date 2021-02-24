/*               1
               1 2 1
             1 2 3 2 1
               1 2 1
                 1
*/

#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);                          // n=3
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-2*i;j++)
		    printf(" ");
		for(k=0;k<=i;k++)
		    printf("%d ",k+1);
		for(l=i;l>0;l--)
		     printf("%d ",l);
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<2*i+2;j++)
		    printf(" ");
		for(k=1;k<n-i;k++)
		    printf("%d ",k);
		for(j=0;j<n-i-2;j++)
		    printf("%d ",n-j-i-2);
		printf("\n");
	}
	return 0;
}
