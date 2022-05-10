#include<stdio.h>
int main(){
	int num, i=7, m1, m2, m3, m4, m5, m6, m7;
	printf("-128부터 127까지의 십진수 정수 하나를 입력하세요 : ");  
	scanf("%d", &num);
	
	printf("%d의 이진수는 ", num);
	if(num<0){
		printf("1");
		m1 = !(num/64%2);
		m2 = !(num/32%2);
		m3 = !(num/16%2);
		m4 = !(num/8%2);
		m5 = !(num/4%2);
		m6 = !(num/2%2);
		m7 = !(num%2);
		if(m7 == 0){
			m7 = 1;
		}
		else{
			m7 = 0;
			if(m6 == 1){
				m6 = 0;
				if(m5 == 1){
					m5 = 0;
					if(m4 == 1){
						m4 = 0;
						if(m3 == 1){
							m3 = 0;
							if(m2 == 1){
								m2 = 0;
								if(m1 == 1){
									m1 = 0;
								}
							}
						}
					}
				}
			}
		}
		printf("%d%d%d %d%d%d%d", m1, m2, m3, m4, m5, m6, m7);
		
	}
	else{
		printf("0%d%d%d %d%d%d%d", num/64%2, num/32%2, num/16%2, num/8%2, num/4%2, num/2%2, num%2);
	}
	printf(" 입니다.\n");
	return 0;  
} 
