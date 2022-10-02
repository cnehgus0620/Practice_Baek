#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	// n = 케이스 수, s = 선박의 속도, d = 계약 만기일의 수, t = 선박의 수, ans = 답안 출력을 위한 공간
	int n, s, d, t, ans;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {

		//선박 정보 입력 (선박의 수 만큼)
		scanf("%d %d %d", &n, &s, &d);

		// 값 대입을 위한 초기화 진행
		ans = 0;

		// a = 베니스와 선박 의 거리, b = 선박의 하중 (케이스 수 만큼)
		for (int j = 0, a, b; j < n; j++) {
			scanf("%d %d", &a, &b);

			// 선박의 속도 x 계약 만기일의 수가 베니스와 선박의 거리보다 크거나 같다면 ans에 선박의 하중 추가
			if (s * d >= a) ans += b;
		}
		printf("Data Set %d:\n%d\n\n", i, ans);
	}
	return 0;
}