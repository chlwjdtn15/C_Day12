// 문제 : 아래 질문에 답해주세요.

#include <stdio.h>

// 질문 : sub1 함수는 몇 바이트 짜리 함수 인가요? 
void sub1() {
  //0바이트
}

// 질문 : sub2 함수는 몇 바이트 짜리 함수 인가요? 
void sub2() {
  int* arr;
  //8 바이트
}

// 질문 : sub3 함수는 몇 바이트 짜리 함수 인가요? 
void sub3() {
  int arr[4]; // arr 주소값.
  //8 바이트
}

// 질문 : arr1과 arr2의 공통점과 차이점은 무엇인가요?
void sub4() {

  // 1. 값의 의미
  // 2. 초기화 여부
  // 3. 자료의 크기
  // 4. 수정 가능의 여부 

  int arr1[4]; 
  int* arr2; 
  printf("%ld\n", (long)sizeof(sub1));
  // 
}

int main(void) {
  sub1();
  sub2();
  sub3();
  sub4();
  
  return 0;
}