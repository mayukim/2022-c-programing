#include <stdio.h>
main()
{
	int a=0;
	
	while(a<10)
	{
		printf("#");
		a++;
	} 
	
	int num = 1;
	
	while(num <= 5)
	{
		printf("�ݺ����� : %d \n", num);
		num++;
	} 
	printf("�ݺ��� ���� �� num = %d \n", num);
	
	int i=30;
	
	while (i>=10)
	{
		printf("%d ", i);
		i=i-2;
	}
	
	int i=1;
	int sum = 0;
	
	while(i<=10)
	{
		sum = sum + i;
		i++;
	}
	printf("1���� 10������ �� : %d", sum);
}
