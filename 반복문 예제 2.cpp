#include <stdio.h>
main()
{
	int i, n, sum=0 ;
	
	printf("���� ���� ù��°  �� �Է� : ");
	scanf("%d", &i);
	
	printf("���� ���� ������ �� �Է� : ");
	scanf("%d", &n);
	
	while(i<=n)
	{
	    sum = sum + i;
		i++;
	} 
	printf("%d���� %d������ ���� %d �Դϴ�\n", i, n, sum);
	
}
