#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 최솟값을 검출하여 전체 합에서 빼는 코드 작성 
// 각 과목당 입력은 0 ~ 100

int main(void)
{
	int arr[6] = { 0, };		   // 배열 선언 및 초기화
	int i, sum = 0;				   // for문에서 쓸 i변수 선언, 합계 sum 변수 선언 및 초기화
	int min = 100;			       // 최솟값 검출에 필요한 min 변수 선언 및 초기화
	for (i = 0; i < 6; i++) {	   // 6번 코드 실행
		scanf("%d", &arr[i]);	   // arr[] 변수에 차례대로 정수값 저장 
	}
	for (i = 0; i < 4; i++) {	   // 물, 화, 생, 지에서 최솟값 검출
		if (arr[i] <= min) {	   // 배열 arr[0,1...]이 arr[1,2...]보다 작으면
			min = arr[i];		   // min 변수에 arr[0,1...] 값을 저장
		}
		sum += arr[i];			   // sum에 물, 화, 생, 지 값의 합계를 저장
	}
	sum -= min;					   // 그 합계에서 최솟값을 뺌 => 나머지 3개의 합 => sum

	if (arr[4] < arr[5]) {		   // 나머지 역사, 지리 중 큰 값을 sum에 더해줌
		sum += arr[5];			   // arr[5]가 클 때
	}
	else {							
		sum += arr[4];			   // arr[4]가 클 때
	}

	printf("%d", sum);			   // sum 출력 (합계)
	return 0;					   // 종료
}

// 시간 복잡도 : O(N)