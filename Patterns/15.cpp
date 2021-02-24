/*            1
            1 2 3
          1 2 3 4 5
            1 2 3
              1
*/

#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);                   // n=3
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-2*i;j++)
		    printf(" ");
		for(k=0;k<2*i+1;k++)
		    printf("%d ",k+1);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*i+2;j++)
		    printf(" ");
		for(k=0;k<n-2*i;k++)
		    printf("%d ",k+1);
		printf("\n");
	}
	return 0;
}
