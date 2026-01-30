#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>	

// 자판기 구현하기

//int payments(int pay);

int main(void)
{
	// 메뉴, 가격, 결제 수단 배열 
	char* menus[] = { "카다이프","피스타치오", "초콜릿", "버터" };
	int* prices[] = { 5000, 8000, 3000, 4000 }; 
	char* payments[] = {"현금", "카드"};

	// 선택 변수
	char selec_menu[] = "";
	char selec_pay[20] = "";

	// 메뉴 출력
	printf("========== 재료 ==========\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d. %s : %d원 \n", i+1, menus[i], prices[i]);
	}

	printf("=========================\n");

	// 메뉴 선택
	printf("상품을 선택해주세요 : ");
	scanf("%s", &selec_menu);

	printf("\n");

	// 결제 수단
	while (1) {
		printf("결제 방법을 선택해주세요(현금, 카드) : ");
		scanf("%s", &selec_pay);

		// 수단 별 출력 문구
		if (strcmp(selec_pay, "현금") == 0)
		{
			printf("%d원을 넣어주세요.\n", prices[0]);
		}
		else if (strcmp(selec_pay, "카드") == 0)
		{
			printf("카드를 리더기에 꽂아주세요.\n");
		}
		else
		{
			printf("다시 선택해주세요.\n");
			continue;
		}
		break;
	}



	
	return 0;
}
