/*       123454321
          1234321
           12321
            121
             1
*/

#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		    printf(" ");
		for(k=1;k<=n-i;k++)
		    printf("%d",k);
		for(j=0;j<n-i-1;j++)
		    printf("%d",n-j-i-1);
		printf("\n");
	}
	return 0;
}
