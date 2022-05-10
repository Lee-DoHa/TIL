#include <stdio.h>

unsigned int two_to_ten(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8){
	
	int result;
	
	switch(n1){
		case 1:
			if(n8 == 1){
				n1 = (!n1);
				n2 = (!n2);
				n3 = (!n3);
				n4 = (!n4);
				n5 = (!n5);
				n6 = (!n6);
				n7 = (!n7);
				n8 = 1;
			}
			else if(n8 == 0){
				if(n7 == 1){
					n6 = (!n6);
					n5 = (!n5);
					n4 = (!n4);
					n3 = (!n3);
					n2 = (!n2);
					n6 = (!n6);
				}
				else if(n7 == 0){
					if(n6 == 1){
						n5 = (!n5);
						n4 = (!n4);
						n3 = (!n3);
						n2 = (!n2);
						n1 = (!n1);
					}
					else if(n6 == 0){
						if(n5 == 1){
							n4 = (!n4);
							n3 = (!n3);
							n2 = (!n2);
							n1 = (!n1);
						}else if(n5 == 0){
							if(n4 == 1){
								n3 = (!n3);
								n2 = (!n2);
								n1 = (!n1);
							}else if(n4 == 0){
								if(n3 == 1){
									n2 = (!n2);
									n1 = (!n1);
								}else if(n3 == 0){
									if(n2 == 1){
										n1 = (!n1);
									}
									else if(n2 == 0){
										n1 = 1;
									}
								}
							}
						}
					}
				}
			}
			n1 *= 128;
                        n2 *= 64;
                        n3 *= 32;
                        n4 *= 16;
                        n5 *= 8;
                        n6 *= 4;
                        n7 *= 2;
			n8 *= 1;
			result = -(n1+n2+n3+n4+n5+n6+n7+n8);
			break;
		case 0:
			n1 *= 128;
                        n2 *= 64;
                        n3 *= 32;
                        n4 *= 16;
                        n5 *= 8;
                        n6 *= 4;
                        n7 *= 2;
                        n8 *= 1;
			result = n1+n2+n3+n4+n5+n6+n7+n8;
			break;
	}
	return result;
}

int main(void){
	int num, n1, n2, n3, n4, n5, n6, n7, n8;
	printf("1. 이진수 변환기  2. 이진수 덧셈기  3. 이진수 뺄셈기\n");
	printf("번호를 선택하세요 : ");
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("8비트 이진수를 입력하세요 : ");
			scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
			
			printf("십진수로 %d 입니다.\n", two_to_ten(n1, n2, n3, n4, n5, n6, n7, n8));
			break;
		case 2:
			printf("첫 번째 8비트 이진수를 입력하세요 : ");
			//scanf("", );
			printf("두 번째 8비트 이진수를 입력하세요 : ");
			//scanf("", );

			//printf("두 이진수의 합은 %s이고, 십진수로 %d입니다.", , );
			break;
		case 3:
			printf("첫 번째 8비트 이진수를 입력하세요 : ");
                        //scanf("", );
                        printf("두 번째 8비트 이진수를 입력하세요 : ");
                        //scanf("", );

			//printf("두 이진수의 차는 %s이고, 십진수로 %d입니다.", , );
			break;

	}

	return 0;
}
