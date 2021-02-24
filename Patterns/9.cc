/*           1
            12
           123
          1234
		 12345
*/  

#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		    printf(" ");
		for(k=0;k<=i;k++)
		    printf("%d",k+1);
		printf("\n");
	}
	return 0;
}
