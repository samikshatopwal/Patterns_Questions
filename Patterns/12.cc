/*             1
              121
             12321
            1234321
           123454321
*/

#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		    printf(" ");
		for(k=0;k<=i;k++)
		    printf("%d",k+1);
		for(l=i;l>0;l--)
		     printf("%d",l);
		printf("\n");
	}
	return 0;
}
