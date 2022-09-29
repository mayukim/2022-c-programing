#include <stdio.h>

exam1(){
	int num;
	while(1)
	{
		printf("숫자입력:");
		scanf("%d",&num);
		 
	}
	
} 

exam2(){
	int n, i, jumsu;
	int max=0, min=100;
	printf("학생 수를 입력하세요 :");
	scanf("%d",&n)
	  
	
	
} 

exam3(){
	
} 

exam4(){
	
} 

exam5(){
	
} 


main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
		}
	}
}

