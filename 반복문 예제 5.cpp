#include <stdio.h>

exam1(){
	int n=1, sum=0;
	
	while(1)
	{
		sum=sum+n;
		if(sum>=100) break;
		n++;
	}
	printf("sum=%d, n=%d\n", sum,n);
} 

exam2(){
	int n, count=0, sum=0;
	do
	{
		scanf("%d", &n);
		if(n<1)
			continue;
		sum=sum+n;
		count++;
		
	 } while(count<5);
	printf("�հ�:%d\n",sum);
} 

exam3(){ 
	int n, a;
	printf("4�ڸ���");
	
} 

exam4(){
	int answer, cnt, guess;

exam5(){
	
}


main(){
	int no;
	
	while(1){
		printf("\n������ȣ:");
		scanf("%d" , &no);
		printf("%d�� ����==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}

