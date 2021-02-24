/*         1
           21
           321
           4321
           54321
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j>=1;j--)
		   printf("%d",j);
		printf("\n");
	}
	return 0;
}
