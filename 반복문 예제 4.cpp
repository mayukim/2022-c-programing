#include <stdio.h>
main()
{
	/*int i = 10;
	
	do
	{
		printf("%d\n",i);
		i--;
	} while(i>=5);*/
	
	
	int i =0,n;
	do
	{
		printf("숫자 입력 :");
		scanf("%d", &n);
		i=i+ n;
	}while( n !=0 );
	printf("합 : %d", i);
	
}
