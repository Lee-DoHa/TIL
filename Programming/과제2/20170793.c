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
	int m1, m2, m3, m4, m5, m6, m7, m8, r1, r2, r3, r4, r5, r6, r7, r8;
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
			scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
			printf("두 번째 8비트 이진수를 입력하세요 : ");
			scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &m1, &m2, &m3, &m4, &m5, &m6, &m7, &m8);
			r8 = n8+m8;
			if(r8 == 2){
				r8 -= 2;
				r7 = 1+n7+m7;
			}else{
				r7 = n7+m7;
			}
			if(r7 >= 2){
				r7 -= 2;
				r6 = 1+n6+m6;
			}else{
				r6 = n6+m6;
			}
			if(r6 >= 2){
				r6 -= 2;
                                r5 = 1+n5+m5;
                        }else{
                                r5 = n5+m5;
                        }
			if(r5 >= 2){
				r5 -= 2;
                                r4 = 1+n4+m4;
                        }else{
                                r4 = n4+m4;
                        }
			if(r4 >= 2){
				r4 -= 2;
                                r3 = 1+n3+m3;
                        }else{
                                r3 = n3+m3;
                        }
			if(r3 >= 2){
				r3 -= 2;
                                r2 = 1+n2+m2;
                        }else{
                                r2 = n2+m2;
                        }
			if(r2 >= 2){
				r2 -= 2;
                                r1 = 1+n1+m1;
                        }else{
                                r1 = n1+m1;
                        }
			if(r1 >= 2){
				r1 -= 2;
			}
			printf("두 이진수의 합은 %d%d%d%d%d%d%d%d이고, 십진수로 %d입니다.\n", r1, r2, r3, r4, r5, r6, r7, r8, two_to_ten(r1, r2, r3, r4, r5, r6, r7, r8));
			break;
		case 3:
			printf("첫 번째 8비트 이진수를 입력하세요 : ");
                        scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
                        printf("두 번째 8비트 이진수를 입력하세요 : ");
                        scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &m1, &m2, &m3, &m4, &m5, &m6, &m7, &m8);
			r8 = n8-m8;
			r7 = n7-m7;
			r6 = n6-m6;
			r5 = n5-m5;
			r4 = n4-m4;
			r3 = n3-m3;
			r2 = n2-m2;
			r1 = n1-m1;
			if(r8 < 0){
				r8 = 1;
				r7--;
			}
			if(r7 < 0){
				r7 = 1;
				r6--;
			}
			if(r6 < 0){
				r6 = 1;
				r5--;
			}
			if(r5 < 0){
                                r5 = 1;
                                r4--;
                        }
			if(r4 < 0){
                                r4 = 1;
                                r3--;
                        }
			if(r3 < 0){
                                r3 = 1;
                                r2--;
                        }
			if(r2 < 0){
                                r2 = 1;
                                r1--;
                        }
			if(r1 < 0){
                                r1 = 1;
                        }
			printf("두 이진수의 차는 %d%d%d%d%d%d%d%d이고, 십진수로 %d입니다.\n", r1, r2, r3, r4, r5, r6, r7, r8, two_to_ten(r1, r2, r3, r4, r5, r6, r7, r8));
			break;

	}

	return 0;
}
