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

	// 선택 변수
	int selec_menu = 0;
	char selec_pay[20] = "";

	// 금액 변수
	int input_cash = 0;

	// 메뉴 출력
	printf("========== 재료 ==========\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d. %s : %d원 \n", i+1, menus[i], prices[i]);
	}

	printf("=========================\n");

	// 메뉴 선택
	printf("상품을 선택해주세요 : ");
	scanf("%d", &selec_menu);
	
	printf("\n[  %s ]를 선택하셨습니다. %d원입니다.\n", menus[selec_menu - 1], prices[selec_menu - 1]);

	printf("\n");

	// 결제 수단
	while (1) {
		printf("결제 방법을 선택해주세요(현금, 카드) : ");
		scanf("%s", &selec_pay);

		// 수단 별 출력 문구
		// 현금
		if (strcmp(selec_pay, "현금") == 0)
		{
			// 입금액 확인
			int price = prices[selec_menu - 1];	
			int cash = 0;
			do {
				printf("현금을 넣어주세요. : ");
				scanf("%d", &input_cash);

				cash += input_cash;

				if (cash < price)
				{
					printf("%d원 부족합니다.\n", price - cash);
					continue;
				}
				else if (cash >= price)
				{
					printf("결제 완료 되었습니다.\n");

				}

			} while (cash < price);
			
			printf("거스름 돈은 %d원 입니다.", cash - price);
		}

		// 카드
		else if (strcmp(selec_pay, "카드") == 0)
		{
			printf("카드를 리더기에 꽂아주세요.\n");
		}

		// 재선택
		else
		{
			printf("다시 선택해주세요.\n");
			continue;
		}
		break;
	}

	

	
	return 0;
}
