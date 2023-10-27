#include <stdio.h>

int main() {
  int orderAmount;
  float basicAcc = 0, claimDC = 0, nPayMoney = 0, nPayBankBook = 0, nHDCard = 0, nMembership = 0;
  char paymentMethod, isMember; // [a, b, c, d, e, f] | [y, others]
  printf("=== 네이버페이 결제 계산 프로그램 ===\n주문액을 입력하세요: ");

  // 총 금액 입력부
  scanf("%d", &orderAmount);

  // 결제 수단 입력부
  printf("\n=== 결제 수단 목록 ===\na)NPay머니 네이버통장 충전결제 b)NPay머니 일반 충전결제 c)계좌 간편결제\nd)네이버 현대카드 간편결제 e)청구할인 삼성카드결제 f)일반 카드결제\n결제 수단을 입력하세요: ");

  // 결제 수단 입력부 - 입력 유효성 확인
  while (1) {
    scanf(" %c", &paymentMethod);
    if (paymentMethod == 'a' || paymentMethod == 'b' || paymentMethod == 'c' || paymentMethod == 'd' || paymentMethod == 'e' || paymentMethod == 'f') break;
    else printf("잘못 입력하셨습니다. 재입력 바랍니다.\n결제 수단을 입력하세요: ");
  }

  // 네이버 멤버십 여부 확인부
  printf("\n네이버 멤버십에 가입되어 있나요? (y/n): ");
  scanf(" %c", &isMember);

  // 할인 & 적립 계산부
  basicAcc = orderAmount * 0.01; // 기본 적립

  // 할인 & 적립 계산부 - 결제 방식에 따른 할인 & 적립 확인
  switch (paymentMethod) {
    case 'a': // npay 네이버통장 충전결제
      nPayMoney = orderAmount * 0.015;
      nPayBankBook = orderAmount * 0.005;
      break;
    case 'b': // npay 일반 충전결제
      nPayMoney = orderAmount * 0.015;
      break;
    case 'd': // 네이버 현대카드 간편결제
      if (orderAmount * 0.05 > 10000) {
        nHDCard = 10000;
      } else nHDCard = orderAmount * 0.05;
      break;
    case 'e': // 청구할인 삼성카드 결제
      if (orderAmount >= 50000) {
        if (orderAmount * 0.05 > 5000) {
          claimDC = 5000;
        } else claimDC = orderAmount * 0.05;
      }
      break;
  }

  // 할인 & 적립 계산부 - 네이버 멤버십 여부에 따른 적립 확인
  if (isMember == 'y' && isMember == 'Y') {
    if (orderAmount < 200000) { // 20만원 미만인 경우
      nMembership = orderAmount * 0.04;
    } else { // 20만원 이상일 경우
      if ((orderAmount - 200000) * 0.01 > 12000) { // 적립 상한액 (2만원) 초과일 경우
        nMembership = 20000;
      } else {
        nMembership = 8000 + ((orderAmount - 200000) * 0.01);
      }
    }
  }

  // 결과 출력부
  printf("\n=== 결제 및 적립 내역 ===\n주문금액 %d원", orderAmount);
  if (claimDC > 0) printf("\n청구할인 %g원", claimDC);
  printf("\n기본적립 %g원", basicAcc);
  if (nPayMoney > 0) printf("\n네이버페이 머니 결제적립 %g원", nPayMoney);
  if (nPayBankBook > 0) printf("\n네이버통장 추가적립 %g원", nPayBankBook);
  if (nHDCard > 0) printf("\n네이버 현대카드 추가적립 %g원", nHDCard);
  if (nMembership > 0) printf("\n네이버 멤버십 추가적립 %g원", nMembership);
  printf("\n총 적립액은 %g원입니다.", basicAcc + nPayMoney + nPayBankBook + nHDCard + nMembership);

  return 0;
}