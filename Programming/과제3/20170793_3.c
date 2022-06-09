#include <stdio.h>
#include <string.h>

void num1(char a[][10], int b[], int c[]){
	char tmp[10];
	int b_tmp, c_tmp;
	for(int i = 0; i < 20; i++){
		for (int j = 0; j < 19; j++){
			if(strcmp(a[j], a[j+1]) > 0){
				strcpy(tmp, a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1], tmp);
				
				b_tmp = b[j];
				b[j] = b[j+1];
				b[j+1] = b_tmp;
							
				c_tmp = c[j];
				c[j] = c[j+1];
				c[j+1] = c_tmp;	
			}
		}
	}

	printf("\n이름       학번       점수\n");
	for(int i = 0; i < 20; i++){
		printf("%-9s  %-10d %-4d\n", a[i], b[i], c[i]);
	}
}

void num2(char a[][10], int b[], int c[]){
	char tmp[10];
        int b_tmp, c_tmp;
        for(int i = 0; i < 20; i++){
        	for(int j = 0; j < 19; j++){
			if(b[j] > b[j+1]){
				strcpy(tmp, a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1], tmp);

				b_tmp = b[j];
				b[j] = b[j+1];
				b[j+1] = b_tmp;
			
				c_tmp = c[j];
				c[j] = c[j+1];
				c[j+1] = c_tmp;
			}
		}
        }

        printf("\n이름       학번       점수\n");
        for(int i = 0; i < 20; i++){
                printf("%-9s  %-10d %-4d\n", a[i], b[i], c[i]);
        }	
}

void num3(char a[][10], int b[], int c[]){
	char tmp[10];
        int b_tmp, c_tmp;
        for(int i = 0; i < 20; i++){
                for(int j = 0; j < 19; j++){
                        if(c[j] < c[j+1]){
                                strcpy(tmp, a[j]);
                                strcpy(a[j], a[j+1]);
                                strcpy(a[j+1], tmp);

                                b_tmp = b[j];
                                b[j] = b[j+1];
                                b[j+1] = b_tmp;

                                c_tmp = c[j];
                                c[j] = c[j+1];
                                c[j+1] = c_tmp;
                        }
                }
        }

        printf("\n이름       학번       점수\n");
        for(int i = 0; i < 20; i++){
                printf("%-9s  %-10d %-4d\n", a[i], b[i], c[i]);
        }
}

void num4(char a[][10], int b[], int c[], char search_name[]){
	for(int i = 0; i < 20; i++){
		if(strcmp(search_name, a[i]) == 0){
			printf("\n이름       학번       점수\n");
			printf("%-9s  %-10d %-4d\n", a[i], b[i], c[i]);
		}
	}
}

int main(void){
	
	char name[20][10] = {"Sophia", "Olivia", "Riley", "Emma", "Ava", "Isabella", "Aria", "Amelia", "Mia", "Liam", "Noah", "Jackson", "Aiden", "Elijah", "Grayson", "Lucas", "Oliver", "Caden", "Mateo", "David"};


	int num[20] = {20220001, 20220010, 20220002, 20220015, 20220009, 20220014, 20220020, 20220005, 20220016, 20220008, 20220012, 20220004, 20220018, 20220017, 20220003, 20220013, 20220007, 20220019, 20220011, 20220006};

	int score[20] = {98, 96, 88, 77, 82, 93, 84, 79, 90, 80, 89, 99, 78, 83, 92, 71, 72, 68, 96, 76};
	int n;
	char search_name[10];

	while(1){
		printf("\n1. 이름 오른차순 출력       2. 학번 오름차순 출력\n3. 점수 내림차순 출력       4. 이름 검색\n5. 종료\n\n번호를 선택하세요 : ");
		scanf("%d", &n);
		switch(n){
			case 1:
				num1(name, num, score);
				break;
			case 2:
                                num2(name, num, score);
                                break;
			case 3:
                                num3(name, num, score);
                                break;
			case 4:
				printf("이름을 입력하세요 : ");
				scanf("%s", search_name);
                                num4(name, num, score, search_name);
                                break;
			case 5:
                                goto EXIT;
		}
		
	}
	EXIT:
		printf("$\n");

	return 0;
}
