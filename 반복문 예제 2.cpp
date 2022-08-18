#include <stdio.h>
main()
{
	int i, n, sum=0 ;
	
	printf("합을 구할 첫번째  수 입력 : ");
	scanf("%d", &i);
	
	printf("합을 구할 마지막 수 입력 : ");
	scanf("%d", &n);
	
	while(i<=n)
	{
	    sum = sum + i;
		i++;
	} 
	printf("%d부터 %d까지의 합은 %d 입니다\n", i, n, sum);
	
}
