#include <stdio.h>
main()
{
	/*int i=0, sum=0;
	
	while(1)
	{
		i++;
		if(i >10) break;
		if(i%5==0)
			continue;
		sum+=i;
	}
	printf("sum=%d\n", sum);
	
	int num, i = 1;
	printf("����� ���� �� :");
	scanf("%d", &num);
	
	while(i <= num)
	{
		if(num % i == 0)
			printf("%d ", i);
		i++;
	 } */
	 
	int i, su, cnt=0;
	printf("���� �Է�:");
	scanf("%d", &su);
	 
	i=1;
	while(i <= su);
	{
		if(su % i==0)
			cnt++;
		i++;
	}
	if(cnt ==2)
		printf("%d�� �Ҽ�",su);
	else
		printf("%d�� �Ҽ��� �ƴ�",su);
}
