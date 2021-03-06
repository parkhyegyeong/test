//과제번호 : 실습#1 : 최대값 찾기 프로그램
// 작성자 : 503분반 , 박혜경(C089029)
// 날짜 : 2021년 3월 10일
// 100개의 정수중에서 최대값을 찾아 출력하는 프로그램입니다.


#include <stdio.h>
int score[100] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100}; // score를 정의

int find_max_score(int n)
{
	int  i, tmp;  //변수 i와 tmp를 정의한다.
	tmp = score[0];  //최대값을 담을 변수 tmp에 score의 0번째자리를 넣는다.

	for (i = 1; i < n; i++)   //강의자료 ppt1장 의 12번째 슬라이드를 가져왔습니다.
	{
		if (score[i] > tmp)   //배열 score안의 정수들을 tmp와 비교해서 값이 크다면 
			tmp = score[i];   // tmp로 그 값을 담는다.
	}

	return tmp;				  // tmp값을 반환한다.		
}

int main(void)
{	
	//int score[5] = {1,2,3,4,5 }; 이 코드를 활성화시킨다면 위의 정의된 score , 전역함수를 없애고
	//find_max_score(score , 5); 로 코드를 짜야한다.
	
	int tmp, i = 0;

	tmp = find_max_score(100);	//위의 최대값을 찾는 함수를 불러와 나온 최대값을 tmp에 담는다.

	printf("가장큰수 : %d\n", tmp);   //최대값을 담은 변수 tmp의 값을 출력한다.
}
