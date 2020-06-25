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

  
  printf("%ld\n", (long)sizeof(arr1));
  printf("%ld\n", (long)sizeof(arr2));

  //#1
  //arr1 // 배열의 이름 -> int형 주소값
  //arr2 // 포인터 변수 -> int형 주소값

  //#2
  //arr1 초기값: arr1 첫번째 원소의 주소값
  //arr2 초기값: 쓰레기값

  printf("%ld\n", (long)arr1);
  printf("%ld\n", (long)&arr1[0]);
  printf("%ld\n", (long)arr2);

  //#3
  //arr1 -> 자료형 * 길이 = 사이즈
  //arr2 -> 8

  //#4
  //arr1 -> 상수 고로 변경 불가 (사이즈를 바꾸면 나중에 찾아가기 힘들어짐)
  //arr2 -> 변수 고로 변경 가능



}

int main(void) {
  // sub1();
  // sub2();
  // sub3();
  // sub4();

  //문제: 문자 a - z 까지 할당된 숫자와 출력하기
  //숫자로 구하기
  
  // for (int i = 0; i <= 121; i++) {
  //   printf("%d 이 숫자는 %c\n", i, i);
  // }

  
  //문자로 구하기

  // for (int i = 'a'; i <= 'z'; i++) {
  //   printf("%d 이 숫자는 %c\n", i, i);
  // }


  // 문제 : 문자배열을 만들고 거기에 문장 `abc`를 저장해주세요.
  // 힌트 : c언어에서 모든 문장은\0( 널문자)로 끝나야 한다.

  
  // 구현시작


  char arr[] = {'a', 'b', 'c'};


  // 구현끝

  printf("%c%c%c\n", arr[0], arr[1], arr[2]);
  // // //출력 => abc
  
  // // %s : 문장으로 출력한다.
   printf("%s\n", arr);
  // // 출력 => abc

  // // // %s : 문장으로 출력한다.
  printf("%s\n", &arr[0]);
  // // //출력 => abc

  
  return 0;
}